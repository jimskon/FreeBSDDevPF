# $FreeBSD: releng/12.1/sys/modules/allwinner/aw_thermal/Makefile 346692 2019-04-25 18:39:41Z manu $

.PATH: ${SRCTOP}/sys/arm/allwinner

KMOD=	aw_thermal
SRCS=	aw_thermal.c

SRCS+=	\
	bus_if.h \
	clknode_if.h \
	device_if.h \
	ofw_bus_if.h \

.include <bsd.kmod.mk>
