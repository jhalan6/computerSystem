	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 11
	.globl	_uadd_ok
	.align	4, 0x90
_uadd_ok:                               ## @uadd_ok
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp0:
	.cfi_def_cfa_offset 16
Ltmp1:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp2:
	.cfi_def_cfa_register %rbp
	xorl	%eax, %eax
	movb	%al, %cl
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	-4(%rbp), %eax
	addl	-8(%rbp), %eax
	movl	%eax, -12(%rbp)
	movl	-12(%rbp), %eax
	cmpl	-4(%rbp), %eax
	movb	%cl, -13(%rbp)          ## 1-byte Spill
	jbe	LBB0_2
## BB#1:
	movl	-12(%rbp), %eax
	cmpl	-8(%rbp), %eax
	seta	%cl
	movb	%cl, -13(%rbp)          ## 1-byte Spill
LBB0_2:
	movb	-13(%rbp), %al          ## 1-byte Reload
	andb	$1, %al
	movzbl	%al, %eax
	popq	%rbp
	retq
	.cfi_endproc


.subsections_via_symbols
