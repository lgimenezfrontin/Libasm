
	global _ft_strlen

_ft_strlen:
	mov	rcx, 0

_strlen_loop:
	cmp	BYTE[rdi + rcx], 0
	je	_strlen_null
	inc	rcx
	jmp	_strlen_loop

_strlen_null:
	mov rax, rcx
	ret
