
	global ft_strcpy

ft_strcpy:
	mov	rcx, 0

_strcpy_loop:
	mov	al, [rsi + rcx]
	mov	[rdi + rcx], al
	inc	rcx
	cmp	al, 0
	jmp	_strcpy_loop
	mov	rax, rdi
	ret
