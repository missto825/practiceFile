let x = 0;
let y = 0;
let cursor_item;
let mx = 0;
let my = 0;
let mspeed = 0.01;
window.onload = function(){
    let h1 = document.getElementsByTagName("h1")[0];
    cursor_item = document.getElementsByClassName("cursor_item")[0];
    window.addEventListener("mousemove", mouseFunc,false);
    function mouseFunc(e){
        x = e.clientX;
        y = e.clientY;
        
    h1.innerHTML = "x : " + x + "  mx : " + mx;
    }
    loop();
}
function loop(){
    mx += (x - mx) * mspeed;
    my += (y - my) * mspeed;

    

    cursor_item.style.transform = "translate("+mx +"px," + my + "px)";
    window.requestAnimationFrame(loop);
}
//addEventListener() = 유니티의 이벤트 트리거, 특정한 행동을 포착하면 특정 함수에 보낼수있음
//("타입",보낼함수,???);
//없어도 되네 왜 적은거지
//addEventListener()
//개체.style.transform = "translate("+mx+"px,"+my+ "px)";