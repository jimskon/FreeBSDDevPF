# $FreeBSD: releng/12.1/usr.bin/dtc/Makefile 348138 2019-05-23 01:09:10Z ngie $

PROG_CXX=dtc
SRCS=	dtc.cc input_buffer.cc string.cc dtb.cc fdt.cc checking.cc
MAN=	dtc.1

WARNS?=	3

CXXFLAGS+=	-fno-rtti -fno-exceptions

CXXSTD=	c++11

NO_SHARED?=NO

.include <bsd.prog.mk>
