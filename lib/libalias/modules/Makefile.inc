# $FreeBSD: releng/12.1/lib/libalias/modules/Makefile.inc 312454 2017-01-20 03:34:59Z ngie $

.PATH: ${SRCTOP}/sys/netinet/libalias

SHLIBDIR?= /lib
LIB?=   alias_${NAME}
SHLIB_NAME?=libalias_${NAME}.so
WARNS?=	1
