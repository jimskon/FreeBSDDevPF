# $FreeBSD: releng/12.1/cddl/usr.sbin/dtrace/tests/Makefile 348428 2019-05-30 15:20:20Z markj $

.include <bsd.own.mk>

TESTS_SUBDIRS+=	common

.if ${MACHINE_CPUARCH} == "i386"
TESTS_SUBDIRS+= i386
.endif

.PATH:		${SRCTOP}/tests
KYUAFILE=	yes

.PATH:		${.CURDIR}/tools
SCRIPTSDIR=	${TESTSDIR}
SCRIPTS=	dtest.sh

.include <bsd.test.mk>
