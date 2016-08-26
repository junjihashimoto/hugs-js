var LibraryHugs = {
    shellNode: function(cmd) {
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
    },
    setupNodeEnv: function() {
	if(process.env['HUGSDIR'])
	    ENV.HUGSDIR=process.env['HUGSDIR'];
	if(process.env['HUGSFLAGS'])
	    ENV.HUGSFLAGS=process.env['HUGSFLAGS'];
	//           console.log(process.argv[1]);
	var fs = require('fs');
        
	var dirs = process.argv[1].split('/'); //runhugs
	dirs.pop(); //src
	dirs.pop(); //hugs
	var WorkPath = dirs.join('/');
	for(var i=1;i<dirs.length;i++){
	    //console.log(dirs[i]);
	    try {
		FS.lookupPath(dirs[i]);
	    } catch (e) {
		//console.log("mkdir:"+dirs[i]);
		FS.mkdir(dirs[i]);

	    }
	    FS.chdir(dirs[i]);
	}

	var dirsHugs = process.argv[1].split('/');
	dirsHugs.pop();
	dirsHugs.pop();
	var HugsPath = dirsHugs.join('/');
	//	   console.log("mount");
	//	   console.log(HugsPath);
	//	   console.log(WorkPath);
	FS.mount(NODEFS, { root: HugsPath }, WorkPath);
	//	   console.log(FS.readdir("."));
	//	   console.log("chdir:"+process.cwd());

	FS.chdir('/');
	FS.chdir(process.cwd());
    },
};

mergeInto(LibraryManager.library, LibraryHugs);
