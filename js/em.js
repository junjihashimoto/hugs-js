function DoCommand(command){
    Module.command_text=command;
    document.getElementById('line').value="";
    try{ 
        Module.ccall('printf','int',['string'],[Module.command_text+'\n']);
        Module.ccall('initInterpreter',null,[],[]);
        Module.ccall('doCommand',null,[],[]);
    }catch(e){
        console.log(e);
    }
    return false;
}

function SendCommand(){
    DoCommand(document.getElementById('line').value);
}
function PlayCommand(){
    DoCommand(":load main.hs");
    DoCommand(":main");
}

(function(){
  document.getElementById('save-btn').addEventListener('click',
    function(ev){
        FS.writeFile('main.hs',ace_editor.getValue(),null);
//      FS.writeeditor.getValue()
    }
  );
  document.getElementById('play-btn').addEventListener('click',
    function(ev){
      FS.writeFile('main.hs',ace_editor.getValue(),null)
      PlayCommand();
    }
  );

})();
