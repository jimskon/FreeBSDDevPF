# $FreeBSD: releng/12.1/sys/modules/allwinner/aw_sid/Makefile 346691 2019-04-25 18:38:38Z manu $

.PATH: ${SRCTOP}/sys/arm/allwinner

KMOD=	aw_sid
SRCS=	aw_sid.c

SRCS+=	\
	bus_if.h \
	clknode_if.h \
	device_if.h \
	ofw_bus_if.h \

.include <bsd.kmod.mk>
