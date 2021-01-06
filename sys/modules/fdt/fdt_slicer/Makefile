# $FreeBSD: releng/12.1/sys/modules/fdt/fdt_slicer/Makefile 346508 2019-04-22 00:38:25Z ian $

.PATH: ${SRCTOP}/sys/dev/fdt

KMOD=	fdt_slicer
SRCS=	fdt_slicer.c

# Generated files...
SRCS+=	\
	bus_if.h \
	device_if.h \
	ofw_bus_if.h \
	opt_platform.h \

.include <bsd.kmod.mk>
