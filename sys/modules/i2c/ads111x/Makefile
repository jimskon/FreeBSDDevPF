# $FreeBSD: releng/12.1/sys/modules/i2c/ads111x/Makefile 350591 2019-08-05 15:56:44Z ian $

.PATH:		${SRCTOP}/sys/dev/iicbus

KMOD=	ads111x
SRCS=	ads111x.c

SRCS+=	\
	bus_if.h \
	device_if.h \
	iicbus_if.h \
	ofw_bus_if.h \
	opt_platform.h \

.include <bsd.kmod.mk>
