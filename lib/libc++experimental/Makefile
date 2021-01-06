# $FreeBSD: releng/12.1/lib/libc++experimental/Makefile 348138 2019-05-23 01:09:10Z ngie $

.include <src.opts.mk>

PACKAGE=	clibs
SRCDIR=		${SRCTOP}/contrib/libc++

LIB=		c++experimental
NO_PIC=
MK_PROFILE=	no

.PATH:		${SRCDIR}/src/experimental

SRCS+=		memory_resource.cpp

WARNS?=		0
CXXFLAGS+=	${PICFLAG}
CXXFLAGS+=	-isystem ${SRCDIR}/include
CXXFLAGS+=	-nostdinc++
CXXFLAGS+=	-nostdlib
CXXFLAGS+=	-D_LIBCPP_BUILDING_LIBRARY
CXXFLAGS+=	-DLIBCXXRT
CXXSTD?=	c++14

.include <bsd.lib.mk>
