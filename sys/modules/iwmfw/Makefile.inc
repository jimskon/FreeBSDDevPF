# $FreeBSD: releng/12.1/sys/modules/iwmfw/Makefile.inc 351875 2019-09-05 17:20:20Z bdrewery $
#
# Common rules for building firmware.  Note this gets auto-included
# by the subdir Makefile's as a consequence of included bsd.kmod.mk.

_FIRM=	${IMG}.fw

CLEANFILES+=	${_FIRM}

FIRMWS=	${_FIRM}:${KMOD}

#
# Note that a license ack is not needed for iwn.
#
#FIRMWARE_LICENSE=

${_FIRM}: ${SRCTOP}/sys/contrib/dev/iwm/${_FIRM}.uu
	uudecode -p ${.ALLSRC} > ${.TARGET}
