function SendCommand(){
    Module.command_text=document.getElementById('line').value;
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

(function(){
  var btn = document.getElementById('save-btn');
  btn.addEventListener('click',
    function(ev){
        FS.writeFile('main.hs',ace_editor.getValue(),null);
//      FS.writeeditor.getValue()
    }
  );
})();
