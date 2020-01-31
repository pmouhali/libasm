	global _old_ft_strlen
	section .text
_old_ft_strlen:
	push rbp
	mov rbp, rsp

	cld 			; clear direction flag
	xor rax, rax		; rax = 0
	xor rcx, rcx		; rcx = 0
	mov rsi, rdi		; lodsb loads from rsi

	jmp loop

epilog:
	mov rax, rcx
	leave
	ret

loop:
	lodsb			; load one char from a string
	cmp rax, 0
	je epilog
	inc rcx
	jmp loop
