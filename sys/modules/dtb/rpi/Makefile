# $FreeBSD: releng/12.1/sys/modules/dtb/rpi/Makefile 343718 2019-02-03 15:34:09Z gonzo $
# DTS files for the Raspberry Pi-B
.if ${MACHINE_ARCH:Marmv[67]*} != ""
DTSO=	\
	spigen-rpi-b.dtso \
	spigen-rpi2.dtso
.elif ${MACHINE_ARCH} == "aarch64"
DTSO=	\
	spigen-rpi3.dtso
.endif

.include <bsd.dtb.mk>
