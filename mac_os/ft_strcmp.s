	section .text
	global _ft_strcmp

_ft_strcmp:
	xor rax, rax
	mov r8d, 1
	mov r9d, -1

compare:
	cmp dil, sil
	cmova eax, r8d
	cmovb eax, r9d

	cmp dil, 0 
	je end
	cmp eax, 0
	jne end

	inc rdi
	inc rsi
	jmp compare

end:
	ret
