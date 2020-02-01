	global _ft_strdup
	extern _malloc
	extern _ft_strlen
	extern _ft_strcpy
	section .text

_ft_strdup:
	call _ft_strlen		; rax now eq strlen
	inc rax			; rax += 1 for \0

	push rdi		; save rdi before calling malloc

	mov rdi, rax		; puts strlen in rdi for calling malloc
	call _malloc

	pop rdi			; restore rdi after calling malloc for strcpy

	cmp rax, 0		; check if malloc returned a null pointer
	je end			; endif, rax == NULL so ok

	mov rsi, rdi		; move received str to strcpy src parameter
	mov rdi, rax		; move memory area for dest parameter

	call _ft_strcpy		; ft_strcpy is returning dest so rax is ok

end:
	ret
