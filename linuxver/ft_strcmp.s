	global ft_strcmp
	section .text

ft_strcmp:
	xor rax, rax
	mov r8d, 1
	mov r9d, -1

compare:
	cmp dil, sil
	cmovg eax, r8d
	cmovl eax, r9d

	cmp dil, 0 
	je end

	inc rdi
	inc rsi
	jmp compare

end:
	ret
