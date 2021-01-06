# $FreeBSD: releng/12.1/sys/modules/fxp/Makefile 344212 2019-02-16 15:43:49Z dim $

.PATH: ${SRCTOP}/sys/dev/fxp

KMOD=	if_fxp
SRCS=	device_if.h bus_if.h if_fxp.c inphy.c miibus_if.h miidevs.h pci_if.h

.include <bsd.kmod.mk>

CWARNFLAGS+=	${NO_WARRAY_BOUNDS}
