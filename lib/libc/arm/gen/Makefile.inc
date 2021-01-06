#	@(#)Makefile.inc	8.1 (Berkeley) 6/4/93
# $FreeBSD: releng/12.1/lib/libc/arm/gen/Makefile.inc 350877 2019-08-11 22:46:58Z ian $

SRCS+=	\
	__aeabi_read_tp.S \
	_ctx_start.S \
	_set_tp.c \
	_setjmp.S \
	alloca.S \
	arm_initfini.c \
	arm_drain_writebuf.c \
	arm_sync_icache.c \
	fabs.c \
	flt_rounds.c \
	getcontextx.c \
	infinity.c \
	ldexp.c \
	makecontext.c \
	setjmp.S \
	signalcontext.c \
	sigsetjmp.S \

MAN+=	\
	arm_drain_writebuf.2 \
	arm_sync_icache.2 \

.if ${MACHINE_ARCH:Marmv[67]*} && (!defined(CPUTYPE) || ${CPUTYPE:M*soft*} == "")

SRCS+=	\
	fpgetmask_vfp.c \
	fpgetround_vfp.c \
	fpgetsticky_vfp.c \
	fpsetmask_vfp.c \
	fpsetround_vfp.c \
	fpsetsticky_vfp.c \

.endif
