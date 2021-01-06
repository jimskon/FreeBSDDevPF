# $FreeBSD: releng/12.1/sys/modules/pst/Makefile 314651 2017-03-04 10:10:17Z ngie $

.PATH: ${SRCTOP}/sys/dev/pst

KMOD=	pst
SRCS=	pst-pci.c pst-iop.c pst-raid.c
SRCS+=  device_if.h bus_if.h pci_if.h

.include <bsd.kmod.mk>
