$('.h1h1').eq(1).html('반가워 난 제이쿼리를 이용했어 넌 냄새나는구나');
$('.btn').eq(1).on('click',function(){
    console.log("전 저에요 버튼을 아무리 눌러도 전 저랍니다 깔깔");
});
$('.btn').eq(0).on('click',function(){
    $('.h1h1').eq(0).slideUp(10);
});
$('.btn').eq(2).on('click',function(){
    $('.h1h1').eq(0).slideDown();
});