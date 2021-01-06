# $FreeBSD: releng/12.1/sys/modules/arm_ti/ti_i2c/Makefile 349096 2019-06-16 01:22:44Z ian $

.PATH: ${SRCTOP}/sys/arm/ti

KMOD=	ti_i2c
SRCS=	ti_i2c.c

SRCS+=	\
	bus_if.h \
	device_if.h \
	iicbus_if.h \
	ofw_bus_if.h \

.include <bsd.kmod.mk>
