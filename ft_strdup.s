
	global ft_strdup
	extern ft_strlen
	extern ft_strcpy
	extern malloc
	extern __errno_location

ft_strdup:
	call	ft_strlen
	inc		rax
	push	rdi
	mov		rdi, rax
	call	malloc wrt ..plt
	cmp		rax, 0
	je		_strdup_error
	mov		rdi, rax
	pop		rsi
	call	ft_strcpy
	ret

_strdup_error:
	call	__errno_location wrt ..plt
	mov		BYTE[rax], 12
	mov		rax, 0
	ret
