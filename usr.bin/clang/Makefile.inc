# $FreeBSD: releng/12.1/usr.bin/clang/Makefile.inc 352768 2019-09-26 18:37:58Z emaste $

WARNS?=		0

.include <bsd.compiler.mk>

MK_PIE:=	no	# Explicit libXXX.a references

.if ${COMPILER_TYPE} == "clang"
DEBUG_FILES_CFLAGS= -gline-tables-only
.else
DEBUG_FILES_CFLAGS= -g1
.endif

.include "../Makefile.inc"
