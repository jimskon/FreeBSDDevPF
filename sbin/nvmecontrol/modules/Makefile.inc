# $FreeBSD: releng/12.1/sbin/nvmecontrol/modules/Makefile.inc 341659 2018-12-06 22:58:55Z imp $

PACKAGE=runtime
NVMECONTROLDIR=	${SRCTOP}/sbin/nvmecontrol

MK_INSTALLLIB=	no
MK_PROFILE=	no

CFLAGS+=	-I${NVMECONTROLDIR}

SHLIB_NAME?=	${LIB}.so
LIBDIR=		/lib/nvmecontrol
