# $FreeBSD: releng/12.1/usr.bin/locale/Makefile 352416 2019-09-16 16:17:29Z yuripv $

.include <src.opts.mk>

PROG=	locale
CFLAGS+= -I${SRCTOP}/lib/libc/locale
LIBADD+= sbuf

HAS_TESTS=
SUBDIR.${MK_TESTS}+= tests

.include <bsd.prog.mk>
