# $FreeBSD: releng/12.1/libexec/rtld-elf/i386/Makefile.inc 351779 2019-09-03 19:36:46Z kib $

CFLAGS+=	${CFLAGS_NO_SIMD} -msoft-float
