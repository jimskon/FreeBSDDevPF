#	@(#)Makefile.inc	8.1 (Berkeley) 6/4/93
# $FreeBSD: releng/12.1/lib/libc/i386/gen/Makefile.inc 350352 2019-07-26 10:13:48Z kib $

SRCS+=	_ctx_start.S _setjmp.S _set_tp.c fabs.S \
	flt_rounds.c infinity.c ldexp.c makecontext.c \
	rfork_thread.S setjmp.S signalcontext.c sigsetjmp.S
