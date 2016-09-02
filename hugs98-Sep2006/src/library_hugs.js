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
	ENV['LD_LIBRARY_PATH']='';
	
	if(ENVIRONMENT_IS_NODE){
	    if(process.env['HUGSDIR'])
		ENV.HUGSDIR=process.env['HUGSDIR'];
	    if(process.env['HUGSFLAGS'])
		ENV.HUGSFLAGS=process.env['HUGSFLAGS'];
	    var fs = require('fs');
            
	    var dirs = process.argv[1].split('/'); //runhugs
	    dirs.pop(); //src
	    dirs.pop(); //hugs
	    var WorkPath = dirs.join('/');
	    for(var i=1;i<dirs.length;i++){
		try {
		    FS.lookupPath(dirs[i]);
		} catch (e) {
		    FS.mkdir(dirs[i]);

		}
		FS.chdir(dirs[i]);
	    }

	    var dirsHugs = process.argv[1].split('/');
	    dirsHugs.pop();
	    dirsHugs.pop();
	    var HugsPath = dirsHugs.join('/');
	    FS.mount(NODEFS, { root: HugsPath }, WorkPath);
	    FS.chdir(process.cwd());
	}
    },
};

mergeInto(LibraryManager.library, LibraryHugs);
