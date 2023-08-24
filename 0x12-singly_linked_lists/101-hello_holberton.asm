section .data
    msg db 'Hello, Holberton', 0xa, 0

section .text
    extern printf
    global main

main:
    mov     edi, msg
    mov     eax, 0
    call    printf

    xor     edi, edi
    call    exit
