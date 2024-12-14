
	global _ft_strlen

_ft_strlen:
	xor	rax, rax

_strlen_loop:
	cmp	[rdi], 0
	je	_strlen_null
	inc	rax
	inc	rdi
	jmp	_strlen_loop

_strlen_null:
	ret
