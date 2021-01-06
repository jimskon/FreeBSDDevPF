# $FreeBSD: releng/12.1/lib/libbearssl/Makefile.inc 344564 2019-02-26 05:59:22Z sjg $

BEARSSL?= ${SRCTOP}/contrib/bearssl
BEARSSL_SRC= ${BEARSSL}/src

CFLAGS+= -I${BEARSSL}/inc

