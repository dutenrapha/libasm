section .data
  NULL equ 0;

section .text

global ft_strdup
extern	malloc
extern	ft_strlen
extern	ft_strcpy

ft_strdup:
    push rdi
    call ft_strlen
    inc rax
    mov rdi, rax
    call malloc
    cmp rax, 0
    je _erro
    pop rsi
    mov rdi, rax
    call ft_strcpy
    ret

_erro:
    pop rdi
    ret