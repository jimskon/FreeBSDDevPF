# $FreeBSD: releng/12.1/usr.sbin/apmd/Makefile 352276 2019-09-13 07:08:43Z bapt $

CONFS=	apmd.conf
PROG=	apmd
MAN=	apmd.8
MANSUBDIR= /i386
SRCS=	apmd.c apmdlex.l apmdparse.y y.tab.h

PACKAGE=apm

WARNS?=	3

CFLAGS+= -I${.CURDIR}

test:
	./apmd -d -f etc/apmd.conf -n

.include <bsd.prog.mk>
