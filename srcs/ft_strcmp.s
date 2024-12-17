
	global _ft_strcmp

_ft_strcmp:
	cmp	[rdi], [rsi]
	jne	_strcmp_diff
	cmp	[rdi], 0
	je	_strcmp_diff
	inc	rdi
	inc	rsi
	jmp	_ft_strcmp

_strcmp_nequal:
	mov	rax, rdi
	sub	rax, rsi
	ret
