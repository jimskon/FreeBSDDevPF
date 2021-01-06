# $FreeBSD: releng/12.1/sys/modules/if_gre/Makefile 348233 2019-05-24 08:42:34Z ae $

SYSDIR?=${SRCTOP}/sys
.PATH: ${SYSDIR}/net ${SYSDIR}/netinet ${SYSDIR}/netinet6
.include "${SYSDIR}/conf/kern.opts.mk"

KMOD=	if_gre
SRCS=	if_gre.c opt_inet.h opt_inet6.h opt_rss.h
SRCS.INET=	ip_gre.c
SRCS.INET6=	ip6_gre.c

.include <bsd.kmod.mk>
