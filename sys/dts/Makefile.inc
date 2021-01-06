# $FreeBSD: releng/12.1/sys/dts/Makefile.inc 340646 2018-11-19 18:59:06Z kevans $

SYSDIR?=${SRCTOP}/sys

test-dts:
.for dts in ${DTS}
	@env MACHINE=`basename ${.CURDIR}` ${SYSDIR}/tools/fdt/make_dtb.sh ${SYSDIR} ${dts} /tmp
.endfor

test-dtso:
.for dtso in ${DTSO}
	@env MACHINE=`basename ${.CURDIR}` ${SYSDIR}/tools/fdt/make_dtbo.sh ${SYSDIR} ${dtso} /tmp
.endfor
