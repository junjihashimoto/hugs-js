var statusElement = document.getElementById('status');
var progressElement = document.getElementById('progress');
var spinnerElement = document.getElementById('spinner');

var Module = {
    noInitialRun: true,
    preRun: [],
    postRun: [function(){
        TTY.default_tty_ops.get_char=function (tty) {
            if (!tty.input.length) {
                var result = null;
                if (ENVIRONMENT_IS_NODE) {
                    // we will read data by chunks of BUFSIZE
                    var BUFSIZE = 256;
                    var buf = new Buffer(BUFSIZE);
                    var bytesRead = 0;
		    
                    var fd = process.stdin.fd;
                    // Linux and Mac cannot use process.stdin.fd (which isn't set up as sync)
                    var usingDevice = false;
                    try {
			fd = fs.openSync('/dev/stdin', 'r');
			usingDevice = true;
                    } catch (e) {}
		    
                    bytesRead = fs.readSync(fd, buf, 0, BUFSIZE, null);
		    
                    if (usingDevice) { fs.closeSync(fd); }
                    if (bytesRead > 0) {
			result = buf.slice(0, bytesRead).toString('utf-8');
                    } else {
			result = null;
                    }
		    
                } else if (typeof window != 'undefined' &&
			   typeof window.prompt == 'function') {
                    // Browser.
                    var str = Module.command_text;
                    Module.command_text = null;
		    //                result = window.prompt('Input: ');  // returns null on cancel
                    result = str;  // returns null on cancel
                    if (result !== null) {
			result += '\n';
                    }
                } else if (typeof readline == 'function') {
                    // Command line.
                    result = readline();
                    if (result !== null) {
			result += '\n';
                    }
                }
                if (!result) {
                    return null;
                }
                tty.input = intArrayFromString(result, true);
            }
            return tty.input.shift();
        }
        Module.ccall('initSystem',null,[],[]);
        Module.ccall('printBanner',null,[],[]);
        Module.ccall('interpreterNoLoop',null,[],[]);
	
	function getDirs(dir)
	{
	    var dirs = [];
	    var dirnames = FS.readdir(dir);
	    for(var i = 0 ; i< dirnames.length ; i++){
		if(dirnames[i] == "."||dirnames[i] == "..")
		    continue;
		else
		    dirs.push(dirnames[i]);
	    }
	    return dirs;
	}
	function getPath(path)
	{
	    if(path=="#")
	    {
		return "/";
	    }
	    else
	    {
		return path.replace(/_/g,"/");
	    }
	}
	function getIdPath(idpath)
	{
	    if(idpath=="#")
	    {
		return "/";
	    }
	    else
	    {
		return idpath.replace(/\//g,"_");
	    }
	}
	function gentree(obj){
	    var dirs = [];
	    var dirnames =[];
	    var path = getPath(obj.id);
	    dirnames = getDirs(path);
	    for(var i = 0 ; i< dirnames.length ; i++){
		var cpath = path + "/" +dirnames[i];	
	dirs.push({
		    "id": getIdPath(cpath),
		    "text": dirnames[i],
		    "parent": obj.id,
		    "children": FS.isDir(FS.lookupPath(cpath).node.mode)
		});
	    }
	    return dirs;
        }

        $('#jstree').jstree({
            'core' : {
                'data' : function (obj, cb) {
                    var hoge = gentree(obj);
                    cb.call(this,hoge);
                }
            }}).on('changed.jstree', function (e, data) {
		    var i, j, r = [];
		    for(i = 0, j = data.selected.length; i < j; i++) {
			//r.push(data.instance.get_node(data.selected[i]).text);
			ace_editor.setValue(FS.readFile(getPath(data.selected[i]), { encoding: 'utf8' }));
		    }
		});

    }],
    print: (function() {
        var element = document.getElementById('output');
        if (element) element.value = ''; // clear browser cache
        return function(text) {
            if (arguments.length > 1) text = Array.prototype.slice.call(arguments).join(' ');
            // These replacements are necessary if you render to raw HTML
            //text = text.replace(/&/g, "&amp;");
            //text = text.replace(/</g, "&lt;");
            //text = text.replace(/>/g, "&gt;");
            //text = text.replace('\n', '<br>', 'g');
            console.log(text);
            if (element) {
                element.value += text + "\n";
                element.scrollTop = element.scrollHeight; // focus on bottom
            }
        };
    })(),
    printErr: function(text) {
        if (arguments.length > 1) text = Array.prototype.slice.call(arguments).join(' ');
        if (0) { // XXX disabled for safety typeof dump == 'function') {
            dump(text + '\n'); // fast, straight to the real console
        } else {
            console.error(text);
        }
    },
    canvas: null,/*(function() {
		   var canvas = document.getElementById('canvas');
		   
		   // As a default initial behavior, pop up an alert when webgl context is lost. To make your
		   // application robust, you may want to override this behavior before shipping!
		   // See http://www.khronos.org/registry/webgl/specs/latest/1.0/#5.15.2
		   canvas.addEventListener("webglcontextlost", function(e) { alert('WebGL context lost. You will need to reload the page.'); e.preventDefault(); }, false);
		   
		   return canvas;
		   })(),*/
    setStatus: function(text) {
        return ;
	/*
          if (!Module.setStatus.last) Module.setStatus.last = { time: Date.now(), text: '' };
          if (text === Module.setStatus.text) return;
          var m = text.match(/([^(]+)\((\d+(\.\d+)?)\/(\d+)\)/);
          var now = Date.now();
          if (m && now - Date.now() < 30) return; // if this is a progress update, skip it if too soon
          if (m) {
          text = m[1];
          progressElement.value = parseInt(m[2])*100;
          progressElement.max = parseInt(m[4])*100;
          progressElement.hidden = false;
          spinnerElement.hidden = false;
          } else {
          progressElement.value = null;
          progressElement.max = null;
          progressElement.hidden = true;
          if (!text) spinnerElement.style.display = 'none';
          }
          statusElement.innerHTML = text;*/
    },
    totalDependencies: 0,
    monitorRunDependencies: function(left) {
        this.totalDependencies = Math.max(this.totalDependencies, left);
        Module.setStatus(left ? 'Preparing... (' + (this.totalDependencies-left) + '/' + this.totalDependencies + ')' : 'All downloads complete.');
    }
};
Module.setStatus('Downloading...');
window.onerror = function(event) {
    // TODO: do not warn on ok events like simulating an infinite loop or exitStatus
    Module.setStatus('Exception thrown, see JavaScript console');
    spinnerElement.style.display = 'none';
    Module.setStatus = function(text) {
        if (text) Module.printErr('[post-exception status] ' + text);
    };
};
