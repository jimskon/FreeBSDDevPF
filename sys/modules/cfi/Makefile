# $FreeBSD: releng/12.1/sys/modules/cfi/Makefile 336436 2018-07-17 23:23:45Z imp $

.PATH: ${SRCTOP}/sys/dev/cfi

KMOD=   cfi
SRCS=   cfi_bus_fdt.c ofw_bus_if.h cfi_core.c cfi_dev.c
SRCS+=  bus_if.h device_if.h opt_cfi.h

opt_cfi.h:
	echo "#define CFI_SUPPORT_STRATAFLASH 1" > ${.TARGET}

.include <bsd.kmod.mk>
