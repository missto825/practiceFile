let human;
let bg;
let h1;

let x = 0;
let y = 0;
let mx = 0;
let my = 0;
let mspeed = 0.009;
window.onload = function(){
    h1 = document.getElementsByTagName("h1")[0];
    human = document.getElementsByClassName("human")[0];
    bg = document.getElementsByClassName("bg")[0];

    window.addEventListener("mousemove", mouseFunc,false);

    function mouseFunc(e){
        x = (e.clientX - window.innerWidth / 2); //중심을 가운데로 만듬
        y = (e.clientY - window.innerHeight / 2);
    }
    loop();
}

function loop(){
    mx += (x - mx) * mspeed;
    my += (y - my) * mspeed;

    h1.innerHTML = "x:" + x + "mx: " + mx;
    human.style.transform = "translate(" + mx + "px," + my + "px)";

    window.requestAnimationFrame(loop);
}