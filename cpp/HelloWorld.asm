%include "io64.inc"

section .text
global CMAIN
CMAIN:
    ;write your code here
    ;주석이 세미클론이야 미췰거같애
    ;이게 왜 주석이냐
    ;2진수를 표현할때는 0b
    ;예: 0b0 0b1 0b10 0b11 0b100 0b101 0b110 0b111 0b1000
    
    ;16진수(0 1 2 3 4 5 6 7 8 9 A B C D E F)
    ;F다음은 10
    ;16진수를 표현할때는 0x
    
    ;0b1001 0101 = 0x95
    PRINT_STRING msg
    
    
    xor rax, rax
    ret
    
section .data
    msg db 'hello world', 0x00