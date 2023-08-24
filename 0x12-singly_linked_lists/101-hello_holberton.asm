section .data
    hello db "Hello, Holberton", 0
    format db "%s", 0

section .text
    global _start

_start:
    ; Call printf function
    mov rdi, format
    mov rsi, hello
    xor rax, rax
    call printf

    ; Exit
    xor rdi, rdi
    call exit
