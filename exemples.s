	global _string_access_exemple
	extern _ft_putchar
	section .text

_string_access_exemple:		; void	string_access_exemple(char *s)
	push rbx		; align stack (allow memory on stack for external func exec, i think, if i dont do that, i get a segfault)
	xor rcx, rcx		; set rcx to zero, will be used as a counter
	jmp loop		; exe loop label's instructions

loop:
	push rcx		; save rcx because we call external func an it may be modified by that call and result in segfaults and/or undefined behavior
	push rdi		; save rdi because we need it to keep our char* param value and to contain the char c ft_putchar's param
	cmp BYTE[rdi + rcx], 0	; compare the pointed char with zero -> this will affect some flags that we can use to determine results of the comparison
	je end			; if cmp results in equality, jump to end label, else, follow next instructions
	mov dil, BYTE[rdi + rcx]; rdi 8b lowest part is called DIL, move the pointed char in DIL, the register in wich ft_putchar will find his parameter
	call _ft_putchar
	pop rdi			; restore rdi value, rdi is now the string_access_exemple's char* parameter, our string to parse
	pop rcx			; restore rcx value, rcx is now the value it had before ft_putchar's call
	inc rcx			; rcx += 1
	jmp loop		; jump to first loop label's instruction

end:
	pop rdi			; restore rdi, if a pushed register is not poped at the end of the program, we get a segfault
	pop rcx			; restore rcx
	pop rbx			; restore stack
	ret			; end of program
