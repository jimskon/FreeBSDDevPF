# $FreeBSD: releng/12.1/sys/modules/usb/uath/Makefile 330749 2018-03-10 23:16:24Z avos $

.PATH: ${SRCTOP}/sys/dev/usb/wlan

KMOD    = if_uath
SRCS    = if_uath.c if_uathvar.h if_uathreg.h	\
	  bus_if.h device_if.h \
	  opt_bus.h opt_usb.h opt_wlan.h usb_if.h usbdevs.h

.include <bsd.kmod.mk>
