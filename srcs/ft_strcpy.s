
	global _ft_strcpy

_ft_strcpy:
	mov	rax, rdi

_strcpy_loop:
	cmp	[rsi], 0
	je	_strcpy_null
	mov	[rdi], [rsi]
	inc	rdi
	inc	rsi
	jmp	_strcpy_loop

_strcpy_null:
	mov	[rdi], 0
	ret
