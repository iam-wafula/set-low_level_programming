global main
extern printf

section .data
    msg db "Hello, Frontier", 0

section .text
main:
    mov rdi, msg
    xor rax, rax
    call printf
    ret
