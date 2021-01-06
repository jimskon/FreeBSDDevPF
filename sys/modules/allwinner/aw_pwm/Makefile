# $FreeBSD: releng/12.1/sys/modules/allwinner/aw_pwm/Makefile 349430 2019-06-26 17:28:55Z ian $

.PATH: ${SRCTOP}/sys/arm/allwinner

KMOD=	aw_pwm
SRCS=	aw_pwm.c

SRCS+=	\
	bus_if.h \
	clknode_if.h \
	device_if.h \
	ofw_bus_if.h \
	pwmbus_if.h

.include <bsd.kmod.mk>
