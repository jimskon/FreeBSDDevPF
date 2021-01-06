# $FreeBSD: releng/12.1/sys/modules/allwinner/aw_rtc/Makefile 346694 2019-04-25 18:41:05Z manu $

.PATH: ${SRCTOP}/sys/arm/allwinner

KMOD=	aw_rtc
SRCS=	aw_rtc.c

SRCS+=	\
	bus_if.h \
	clknode_if.h \
	device_if.h \
	ofw_bus_if.h \
	spibus_if.h \

.include <bsd.kmod.mk>
