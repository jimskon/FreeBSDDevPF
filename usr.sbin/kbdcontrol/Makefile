# $FreeBSD: releng/12.1/usr.sbin/kbdcontrol/Makefile 352276 2019-09-13 07:08:43Z bapt $

PROG=	kbdcontrol
MAN=	kbdcontrol.1 kbdmap.5
MLINKS= kbdmap.5 keymap.5
SRCS=	kbdcontrol.c lex.l

WARNS?=	4
CFLAGS+= -I${.CURDIR}

.include <bsd.prog.mk>
