	global ft_strcpy
	section .text

ft_strcpy:
		xor rcx, rcx
		lea rax, [rdi]				; rax contain now the *dest pointer

copy:
		mov dl, BYTE [rsi + rcx]	; using intermediary register bc copying
		mov BYTE [rdi + rcx], dl	; from one string to another is impossible
		cmp BYTE [rsi + rcx], 0
		je end

		inc rcx
		jmp copy

end:
		ret
