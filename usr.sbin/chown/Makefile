#	@(#)Makefile	8.1 (Berkeley) 6/6/93
# $FreeBSD: releng/12.1/usr.sbin/chown/Makefile 322515 2017-08-14 19:21:37Z ngie $

.include <src.opts.mk>

PROG=	chown
LINKS=	${BINDIR}/chown /usr/bin/chgrp
MAN=	chgrp.1 chown.8

HAS_TESTS=
SUBDIR.${MK_TESTS}+= tests

.include <bsd.prog.mk>
