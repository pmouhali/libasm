	global _ft_read
	section .text

_ft_read:
	mov r8, -1
	mov rax, 0x2000003
	syscall
	cmovc rax, r8
	ret
