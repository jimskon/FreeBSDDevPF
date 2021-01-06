#	@(#)Makefile.inc	8.1 (Berkeley) 6/4/93
# $FreeBSD: releng/12.1/lib/libc/amd64/gen/Makefile.inc 350352 2019-07-26 10:13:48Z kib $

SRCS+=	_setjmp.S _set_tp.c rfork_thread.S setjmp.S sigsetjmp.S \
	fabs.S \
	infinity.c ldexp.c makecontext.c signalcontext.c \
	flt_rounds.c fpgetmask.c fpsetmask.c fpgetprec.c fpsetprec.c \
	fpgetround.c fpsetround.c fpgetsticky.c
