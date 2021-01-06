# $FreeBSD: releng/12.1/lib/libc/x86/sys/Makefile.inc 344851 2019-03-06 17:41:12Z kib $

.PATH:	${LIBC_SRCTOP}/x86/sys

SRCS+= \
	__vdso_gettc.c \
	pkru.c

MAN+=	\
	pkru.3

.if ${MACHINE_CPUARCH} == "amd64" && ${MK_HYPERV} != "no"
CFLAGS+=	-DWANT_HYPERV
.endif
