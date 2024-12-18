
	global _ft_write
	extern __errno_location

_ft_write:
	mov	rax, 1
	syscall
	jc	_write_error
	ret

_write_error:
	mov	r8, rax
	call	__errno_location
	mov	[rax], r8
	mov	rax, -1
	ret