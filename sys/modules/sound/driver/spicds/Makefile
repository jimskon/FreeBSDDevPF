# $FreeBSD: releng/12.1/sys/modules/sound/driver/spicds/Makefile 314651 2017-03-04 10:10:17Z ngie $

.PATH: ${SRCTOP}/sys/dev/sound/pci

KMOD=	snd_spicds
SRCS=	device_if.h bus_if.h isa_if.h pci_if.h
SRCS+=	spicds.c

.include <bsd.kmod.mk>
