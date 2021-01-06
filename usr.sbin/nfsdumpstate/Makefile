# $FreeBSD: releng/12.1/usr.sbin/nfsdumpstate/Makefile 346772 2019-04-27 01:50:09Z rmacklem $

.include <src.opts.mk>

PROG=	nfsdumpstate
MAN=	nfsdumpstate.8

.if ${MK_INET_SUPPORT} != "no"
CFLAGS+= -DINET
.endif
.if ${MK_INET6_SUPPORT} != "no"
CFLAGS+= -DINET6
.endif

.include <bsd.prog.mk>
