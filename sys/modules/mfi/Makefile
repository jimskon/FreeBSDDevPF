# $FreeBSD: releng/12.1/sys/modules/mfi/Makefile 332122 2018-04-06 17:35:35Z brooks $

.PATH: ${SRCTOP}/sys/dev/mfi

SUBDIR= mfip

.if ${MACHINE_CPUARCH} == "i386" || ${MACHINE_CPUARCH} == "amd64"
SUBDIR+= mfi_linux
.endif

KMOD=	mfi
SRCS=	mfi.c mfi_pci.c mfi_disk.c mfi_debug.c mfi_syspd.c mfi_tbolt.c
SRCS+=	opt_mfi.h opt_cam.h
SRCS+=	device_if.h bus_if.h pci_if.h

#CFLAGS += -DMFI_DEBUG

.include <bsd.kmod.mk>
