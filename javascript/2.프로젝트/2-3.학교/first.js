function n_alert(messa){
    document.getElementById('alert').style.display='block';
    document.getElementById('title').innerHTML = messa;
}
function n_alert2(col,messa){
    document.getElementById('alert').style.display='block';
    document.getElementById('title').innerHTML=messa;
    document.getElementById('title').style.color=col;
}
function n_alert(messa){
    document.getElementById('alert').style.display='block';
    document.getElementById('title').innerHTML = messa;
}
function n_alert2(col,messa){
    document.getElementById('alert').style.display='block';
    document.getElementById('title').innerHTML=messa;
    document.getElementById('title').style.color=col;
}
document.getElementById('close').addEventListener('click',function(){
    document.getElementById('alert').style.display='none';
}); //'close'아이디를 찾고 addEventListensr로 클릭을 감지하면 function실행->
document.getElementById('close3').addEventListener('mouseover',function(){
    document.getElementById('alert').style.display='none';
}); //'close'아이디를 찾고 addEventListensr로 클릭을 감지하면 function실행->
