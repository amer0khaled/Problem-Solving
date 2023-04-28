	.file	"main.c"
	.text
	.section	.rodata
.LC0:
	.string	"%i"
	.text
	.globl	main
	.type	main, @function
main:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	-24(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movl	$1, -20(%rbp)
	jmp	.L2
.L7:
	movl	$1, -12(%rbp)
	jmp	.L3
.L4:
	movl	$32, %edi
	call	putchar@PLT
	addl	$1, -12(%rbp)
.L3:
	movl	-24(%rbp), %eax
	subl	-20(%rbp), %eax
	cmpl	%eax, -12(%rbp)
	jle	.L4
	movl	$1, -16(%rbp)
	jmp	.L5
.L6:
	movl	$42, %edi
	call	putchar@PLT
	addl	$1, -16(%rbp)
.L5:
	movl	-20(%rbp), %eax
	addl	%eax, %eax
	cmpl	%eax, -16(%rbp)
	jl	.L6
	movl	$10, %edi
	call	putchar@PLT
	addl	$1, -20(%rbp)
.L2:
	movl	-24(%rbp), %eax
	cmpl	%eax, -20(%rbp)
	jle	.L7
	movl	-24(%rbp), %eax
	movl	%eax, -20(%rbp)
	jmp	.L8
.L13:
	movl	-24(%rbp), %eax
	subl	-20(%rbp), %eax
	movl	%eax, -12(%rbp)
	jmp	.L9
.L10:
	movl	$32, %edi
	call	putchar@PLT
	subl	$1, -12(%rbp)
.L9:
	cmpl	$0, -12(%rbp)
	jg	.L10
	movl	-20(%rbp), %eax
	addl	%eax, %eax
	subl	$1, %eax
	movl	%eax, -16(%rbp)
	jmp	.L11
.L12:
	movl	$42, %edi
	call	putchar@PLT
	subl	$1, -16(%rbp)
.L11:
	cmpl	$0, -16(%rbp)
	jg	.L12
	movl	$10, %edi
	call	putchar@PLT
	subl	$1, -20(%rbp)
.L8:
	cmpl	$0, -20(%rbp)
	jg	.L13
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L15
	call	__stack_chk_fail@PLT
.L15:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 11.3.0-1ubuntu1~22.04) 11.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
