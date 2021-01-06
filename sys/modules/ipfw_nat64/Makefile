# $FreeBSD: releng/12.1/sys/modules/ipfw_nat64/Makefile 346213 2019-04-14 13:08:18Z ae $

.PATH: ${SRCTOP}/sys/netpfil/ipfw/nat64

KMOD=	ipfw_nat64
SRCS=	ip_fw_nat64.c nat64_translate.c
SRCS+=	nat64clat.c nat64clat_control.c
SRCS+=	nat64lsn.c nat64lsn_control.c
SRCS+=	nat64stl.c nat64stl_control.c

CFLAGS+= -I${SRCTOP}/sys/contrib/ck/include

.include <bsd.kmod.mk>
