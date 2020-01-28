	global _ft_strlen
	section .text
_ft_strlen:
	push rbp
	mov rbp, rsp

	cld 			; clear direction flag
	xor rax, rax		; rax = 0
	xor rcx, rcx		; rcx = 0
	mov rsi, rdi		; lodsb loads from rsi

	jmp _loop

_epilog:
	mov rax, rcx
	leave
	ret

_loop:
	lodsb
	cmp rax, 0
	je _epilog
	inc rcx
	jmp _loop
