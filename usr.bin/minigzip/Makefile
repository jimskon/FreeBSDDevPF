# $FreeBSD: releng/12.1/usr.bin/minigzip/Makefile 348149 2019-05-23 05:49:43Z delphij $

SRCDIR=	${SRCTOP}/sys/contrib/zlib/test
.PATH:	${SRCDIR}

PROG=	minigzip

WARNS?=	5
CFLAGS+=-DUSE_MMAP
LIBADD=	z

.include <bsd.prog.mk>
