
	global _ft_strdup
	extern _ft_strlen
	extern _ft_strcpy

_ft_strdup:
	call	ft_strlen
	inc	rax
	push	rdi
	mov	rdi, rax
	call	malloc
	jc	_strdup_error
	mov	rdi, rax
	pop	rsi
	call	ft_strcpy
	ret

_strdup_error:
	mov	r8, rax
	call	__errno_location
	mov	[rax], r8
	mov	rax, 0
	ret
