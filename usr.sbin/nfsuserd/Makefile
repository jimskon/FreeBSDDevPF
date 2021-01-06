# $FreeBSD: releng/12.1/usr.sbin/nfsuserd/Makefile 346461 2019-04-21 00:05:12Z rmacklem $

.include <src.opts.mk>

PROG=	nfsuserd
MAN=	nfsuserd.8
WARNS?=	3

.if ${MK_INET_SUPPORT} != "no"
CFLAGS+= -DINET
.endif
.if ${MK_INET6_SUPPORT} != "no"
CFLAGS+= -DINET6
.endif

.include <bsd.prog.mk>
