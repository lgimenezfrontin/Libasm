
	global _ft_read
	extern __errno_location

_ft_write:
	mov	rax, 0
	syscall
	jc	_write_error
	ret

_write_error:
	mov	r8, rax
	call	__errno_location
	mov	[rax], r8
	mov	rax, -1
	ret