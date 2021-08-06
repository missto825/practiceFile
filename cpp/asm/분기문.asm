%include "io64.inc"

section .text
global CMAIN
CMAIN:
    mov rbp, rsp; for correct debugging
    mov ax, 100
    div bx => ax / 2
    CMP ax,1
    je LAVEL_EQUAL
    PRINT_STRING "홀수"
LAVEL_EQUAL:
    PRINT_STRING "짝수"
        
    ;write your code here
    xor rax, rax
    ret