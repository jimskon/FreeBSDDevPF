# $FreeBSD: releng/12.1/tests/sys/netinet/Makefile 340902 2018-11-24 17:08:49Z markj $

TESTSDIR=	${TESTSBASE}/sys/netinet
BINDIR=		${TESTSDIR}

ATF_TESTS_C=	ip_reass_test \
		so_reuseport_lb_test

ATF_TESTS_SH=	fibs_test

PROGS=	udp_dontroute tcp_user_cookie

MAN=

WARNS?=	6

.include <bsd.test.mk>
