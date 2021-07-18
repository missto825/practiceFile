window.onload = function(){
    let h1 = document.getElementsByTagName("h1")[0];
    let cursor_item = document.getElementsByClassName("cursor_item")[0];
    window.addEventListener("mousemove", mouseFunc,false);

    function mouseFunc(e){
        h1.innerHTML = "x : " + e.clientX + "  y : " + e.clientY;
        cursor_item.style.transform = "translate("+e.clientX +"px," + e.clientY + "px)";
        //console.log(e.clientX);
    }
}

//addEventListener() = 유니티의 이벤트 트리거, 특정한 행동을 포착하면 특정 함수에 보낼수있음
//("타입",보낼함수,???);
//없어도 되네 왜 적은거지