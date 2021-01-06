# $FreeBSD: releng/12.1/lib/googletest/gtest_main/Makefile 344339 2019-02-20 06:03:21Z ngie $

.include <bsd.init.mk>

.PATH:	${GOOGLETEST_SRCROOT}/include ${GOOGLETEST_SRCROOT}/src

LIB_CXX=	gtest_main
SHLIB_MAJOR=	0
PRIVATELIB=	true

CXXFLAGS+=	-I${GOOGLETEST_SRCROOT}/include
CXXFLAGS+=	-I${GOOGLETEST_SRCROOT}

LIBADD+=	gtest
# NB: LDFLAGS added for buildworld builds
LDFLAGS+=	-L${LIBGTESTDIR}

SRCS+=		gtest_main.cc

HAS_TESTS=
SUBDIR.${MK_TESTS}+= tests

.include <bsd.lib.mk>
