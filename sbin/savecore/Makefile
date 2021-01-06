# $FreeBSD: releng/12.1/sbin/savecore/Makefile 341493 2018-12-04 20:40:28Z garga $

PACKAGE=runtime
CONFS=	minfree
VAR_CRASH=	/var/crash
VAR_CRASH_MODE=	0750
CONFSDIR=	VAR_CRASH
PROG=	savecore
LIBADD=	z xo
MAN=	savecore.8

.include <bsd.prog.mk>
