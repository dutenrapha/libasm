section .data
  NULL equ 0;

section .text

global ft_strcpy

ft_strcpy:
  cmp rsi, NULL
  je _end
  mov rbx, 0

_loop:
  mov dl, byte[rsi + rbx]
  mov byte[rdi + rbx], dl
  cmp dl, NULL
  je _end
  inc rbx
  jmp _loop

_end:
  mov rax, rdi
  ret
