	.file	"const.c"
	.text
	.section	.rodata
	.align 4
	.type	x, @object
	.size	x, 4
x:
	.long	20
	.local	y
	.comm	y,4,4
	.data
	.align 4
	.type	a, @object
	.size	a, 4
a:
	.long	10
	.local	b
	.comm	b,4,4
	.globl	c
	.section	.rodata
.LC0:
	.string	"abc"
	.section	.data.rel.local,"aw",@progbits
	.align 8
	.type	c, @object
	.size	c, 8
c:
	.quad	.LC0
	.section	.rodata
.LC1:
	.string	"%p\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	leaq	x.2254(%rip), %rax
	movq	%rax, -8(%rbp)
	movl	$100, -12(%rbp)
	leaq	x.2254(%rip), %rsi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.data
	.align 4
	.type	x.2254, @object
	.size	x.2254, 4
x.2254:
	.long	30
	.local	y.2255
	.comm	y.2255,4,4
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
