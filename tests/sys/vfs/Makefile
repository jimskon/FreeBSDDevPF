# $FreeBSD: releng/12.1/tests/sys/vfs/Makefile 325957 2017-11-17 19:25:39Z cem $

PACKAGE=	tests

TESTSDIR=		${TESTSBASE}/sys/vfs

ATF_TESTS_C+=	lookup_cap_dotdot
CFLAGS.lookup_cap_dotdot.c+=	-I${SRCTOP}/tests

#ATF_TESTS_SH+=	lookup_test

TAP_TESTS_SH+=	trailing_slash

.include <bsd.test.mk>
