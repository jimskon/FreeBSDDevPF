# $FreeBSD: releng/12.1/sys/modules/iflib/Makefile 350062 2019-07-16 18:39:59Z eugen $

.PATH:	${SRCTOP}/sys/net

KMOD=	iflib
SRCS= \
	iflib.c \
	iflib_clone.c \
	mp_ring.c
SRCS+=	ifdi_if.c
SRCS+=	device_if.h bus_if.h pci_if.h pci_iov_if.h ifdi_if.h
SRCS+=	opt_acpi.h opt_inet.h opt_inet6.h opt_sched.h

.include <bsd.kmod.mk>
