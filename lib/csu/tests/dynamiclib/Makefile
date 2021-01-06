# $FreeBSD: releng/12.1/lib/csu/tests/dynamiclib/Makefile 339908 2018-10-30 09:43:26Z andrew $

.PATH: ${.CURDIR:H}
CFLAGS+=	-DDSO_BASE
DPADD+=		${.OBJDIR:H}/dso/libh_csu.so
LDFLAGS+=	-Wl,-rpath,${TESTSDIR} -L${.OBJDIR:H}/dso
LDADD+=		-lh_csu

.include "../Makefile.tests"

.for test in ${ATF_TESTS_C}
ATF_TESTS_CXX+=	${test}
SRCS.${test}=	${test}.c
.endfor
ATF_TESTS_C:=

.include <bsd.test.mk>
