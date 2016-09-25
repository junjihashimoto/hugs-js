var LibraryHugs = {
    shellNode: function(cmd) {
	if(ENVIRONMENT_IS_NODE){
	    var r = 0;
	    try{
		var cmdstr = Pointer_stringify(cmd);
		var cp = require('child_process');
		var out = cp.execSync(cmdstr);
		var sout = out.toString();
		console.log(sout);
	    } catch (e){
		console.log(e);
		r=1;
	    }
	    return r;
	}else{
	    return 1;
	}
	
    },
    setupNodeEnv: function() {
	ENV['LD_LIBRARY_PATH']='./';
	
	if(ENVIRONMENT_IS_NODE){
	    if(process.env['HUGSDIR'])
		ENV.HUGSDIR=process.env['HUGSDIR'];
	    if(process.env['HUGSFLAGS'])
		ENV.HUGSFLAGS=process.env['HUGSFLAGS'];
	    var fs = require('fs');
	    var dirs;
	    dirs = fs.readdirSync('/');
	    for(var i in dirs){
		var path = '/'+dirs[i];
		if(path!='/home' &&
		   path!='/dev' &&
		   path!='/proc' &&
		   path!='/tmp'){
		    FS.mkdir(path);
		    FS.mount(NODEFS, { root: path }, path);
		}
	    }
	    dirs = fs.readdirSync('/home');
	    for(var i in dirs){
		var path = '/home/'+dirs[i];
		if(path!='/home/web_user'){
		    FS.mkdir(path);
		    FS.mount(NODEFS, { root: path }, path);
		}
	    }
	    FS.chdir(process.cwd());
	}
    },
};

mergeInto(LibraryManager.library, LibraryHugs);
