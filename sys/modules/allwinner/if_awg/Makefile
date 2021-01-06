# $FreeBSD: releng/12.1/sys/modules/allwinner/if_awg/Makefile 346696 2019-04-25 18:42:27Z manu $

.PATH: ${SRCTOP}/sys/arm/allwinner

KMOD=	if_awg
SRCS=	if_awg.c

SRCS+=	\
	bus_if.h \
	clknode_if.h \
	device_if.h \
	ofw_bus_if.h \

.include <bsd.kmod.mk>
