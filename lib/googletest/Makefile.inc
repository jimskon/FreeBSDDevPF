# $FreeBSD: releng/12.1/lib/googletest/Makefile.inc 344423 2019-02-21 06:49:20Z ngie $

.include <googletest.test.inc.mk>

GTEST_DIR=	${SRCTOP}/contrib/googletest
GOOGLEMOCK_SRCROOT= ${GTEST_DIR}/googlemock
GOOGLETEST_SRCROOT= ${GTEST_DIR}/googletest

CXXFLAGS+=	${GTESTS_FLAGS}

WARNS?=		6
