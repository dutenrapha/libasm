section .data
  NULL equ 0;

section .text

global ft_strlen

ft_strlen:
  mov rbx, rdi
  mov rdx, 0
_loop:
  cmp byte[rbx], NULL
  je _end
  inc rdx
  inc rbx
  jmp _loop
_end:
  mov rax, rdx
  ret