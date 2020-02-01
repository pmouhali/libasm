	global _ft_write
	section .text

_ft_write:
	mov r8, -1
	mov rax, 0x2000004
	syscall
	cmovc rax, r8
	ret
