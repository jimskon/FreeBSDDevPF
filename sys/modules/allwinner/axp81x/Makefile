# $FreeBSD: releng/12.1/sys/modules/allwinner/axp81x/Makefile 346693 2019-04-25 18:40:23Z manu $

.PATH: ${SRCTOP}/sys/arm/allwinner

KMOD=	axp81x
SRCS=	axp81x.c

SRCS+=	\
	bus_if.h \
	clknode_if.h \
	device_if.h \
	ofw_bus_if.h \
	iicbus_if.h

.include <bsd.kmod.mk>
