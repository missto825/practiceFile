%include "io64.inc"

section .text
global CMAIN
CMAIN:
    mov rbp, rsp; for correct debugging
    mov eax,0x1234
    mov rbx,0x12345678
    mov cl,0xff
    
    mov al,0x00
    mov rax,rdx
    
    
    ;write your code here
    xor rax, rax
    


