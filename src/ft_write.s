section .data
	NULL equ 0;
	SYSCALL_WRITE equ 1;

section .text
	global ft_write
	extern __errno_location

ft_write:
	mov		rax, SYSCALL_WRITE
	syscall
	cmp		rax, NULL
	jl		error
	ret

error:
	neg rax
	push rax
	call __errno_location
	pop rdi
	mov [rax], rdi
	mov rax, -1
	ret