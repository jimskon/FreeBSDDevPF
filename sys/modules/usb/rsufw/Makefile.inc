# $FreeBSD: releng/12.1/sys/modules/usb/rsufw/Makefile.inc 351875 2019-09-05 17:20:20Z bdrewery $
#
# Common rules for building firmware.  Note this gets auto-included
# by the subdir Makefile's as a consequence of included bsd.kmod.mk.

_FIRM=	${IMG}.fw

CLEANFILES+=	${_FIRM}

FIRMWS=	${_FIRM}:${KMOD}:120

# FIRMWARE_LICENSE=	realtek

${_FIRM}: ${SRCTOP}/sys/contrib/dev/rsu/${_FIRM}.uu
	uudecode -p ${.ALLSRC} > ${.TARGET}
