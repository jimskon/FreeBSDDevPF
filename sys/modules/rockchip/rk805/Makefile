# $FreeBSD: releng/12.1/sys/modules/rockchip/rk805/Makefile 341142 2018-11-28 13:53:43Z manu $

.PATH: ${SRCTOP}/sys/arm64/rockchip

KMOD=	rk805
SRCS=	rk805.c

SRCS+=	\
	bus_if.h \
	device_if.h \
	iicbus_if.h \
	regnode_if.h \
	regdev_if.h \
	ofw_bus_if.h \
	opt_platform.h \

.include <bsd.kmod.mk>
