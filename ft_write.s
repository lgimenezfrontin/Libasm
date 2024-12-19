
	global ft_write
	extern __errno_location

ft_write:
	mov		rax, 1
	syscall
	cmp		rax, 0
	jl		_write_error
	ret

_write_error:
	movq	r8, rax
	call	__errno_location wrt ..plt
	neg		r8
	mov		[rax], r8
	mov		rax, -1
	ret
