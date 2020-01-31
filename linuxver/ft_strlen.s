	global ft_strlen
	section .text

ft_strlen:
	xor rax, rax

count:
	cmp BYTE[rdi + rax], 0
	je end
	inc rax
	jmp count

end:
	ret
