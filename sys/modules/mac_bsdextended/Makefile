# $FreeBSD: releng/12.1/sys/modules/mac_bsdextended/Makefile 314651 2017-03-04 10:10:17Z ngie $

.PATH: ${SRCTOP}/sys/security/mac_bsdextended

KMOD=	mac_bsdextended
SRCS=	vnode_if.h \
	mac_bsdextended.h \
	mac_bsdextended.c \
	ugidfw_system.c \
	ugidfw_vnode.c

.include <bsd.kmod.mk>
