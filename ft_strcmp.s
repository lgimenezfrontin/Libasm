
	global ft_strcmp

ft_strcmp:
	mov		rcx, 0

_strcmp_loop:
	mov		al, BYTE[rdi + rcx]
	mov		dl, BYTE[rsi + rcx]
	cmp		al, dl
	jg		_strcmp_greater
	jl		_strcmp_less
	cmp		al, 0
	je		_strcmp_equal
	inc		rcx
	jmp		_strcmp_loop

_strcmp_greater:
	mov		rax, 1
	ret

_strcmp_less:
	mov		rax, -1
	ret

_strcmp_equal:
	mov		rax, 0
	ret
