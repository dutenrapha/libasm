section .data
	NULL equ 0;
	SYSCALL_READ equ 0;

section .text
	global ft_read
	extern __errno_location

ft_read:
	mov rax, SYSCALL_READ
	syscall
	cmp rax, NULL
	jl _erro
	ret

_erro:
	neg rax
	push rax
	call __errno_location
	pop rdi
	mov [rax], rdi
	mov rax, -1
	ret