
	global _ft_strcmp

_ft_strcmp:
	mov	rcx, 0
	mov	rax, 0
	mov	r8, 0
	movzx	rax, BYTE[rdi + rcx]
	movzx	r8, BYTE[rsi + rcx]
	cmp	rax, 0
	cmp	r8, 0
	jz	_strcmp_sub
	cmp	rax, r8
	jne	_strcmp_sub
	inc	rcx
	jmp	_ft_strcmp

_strcmp_sub:
	sub	rax, rsi
	ret
