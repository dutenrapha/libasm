section .data
  NULL equ 0;

section .text

global ft_strcmp

ft_strcmp:
  mov rbx, 0

_loop:
    mov dl, byte[rsi + rbx]
    cmp dl, NULL
    je _end
    mov dl, byte[rdi + rbx]
    cmp dl, NULL
    je _end
    cmp byte[rsi + rbx], dl
    jne _end
    inc rbx
    jmp _loop

_end:
    mov al, byte[rdi + rbx]
    movzx rax, al
    mov bl, byte[rsi + rbx]
    movzx rbx, bl
    sub rax, rbx
    ret