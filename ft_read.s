section .data
  NULL equ 0;
  SYSCALL_READ equ 0;

section .text

global ft_read

ft_read:
    mov rax, SYSCALL_READ
    syscall
    cmp		rax, 0
    jl      _erro
    ret

_erro:
    