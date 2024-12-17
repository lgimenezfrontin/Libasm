
	global _ft_write

_ft_write:
	mov	rax, 1
	syscall
	jc	_write_error
	ret

_write_error:
	mov	rax, -1
	ret
