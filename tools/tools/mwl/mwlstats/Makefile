# $FreeBSD: releng/12.1/tools/tools/mwl/mwlstats/Makefile 283002 2015-05-16 06:18:39Z adrian $

PROG=	mwlstats
BINDIR=	/usr/local/bin
MAN=

SRCS=	main.c mwlstats.c
LIBADD=	bsdstat
CFLAGS+=-I${.CURDIR}/../../../../lib/libbsdstat/

.include <bsd.prog.mk>

CFLAGS+= -I.
