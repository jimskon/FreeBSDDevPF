# $FreeBSD: releng/12.1/tests/sys/netpfil/pf/Makefile 344962 2019-03-09 10:24:39Z kp $

PACKAGE=	tests

TESTSDIR=       ${TESTSBASE}/sys/netpfil/pf
TESTS_SUBDIRS+=	ioctl

ATF_TESTS_SH+=	anchor \
		pass_block \
		forward \
		fragmentation \
		names \
		nat \
		set_tos \
		rdr \
		route_to \
		synproxy \
		set_skip \
		pfsync

${PACKAGE}FILES+=	utils.subr \
			echo_inetd.conf \
			pft_ping.py \
			CVE-2019-5597.py

${PACKAGE}FILESMODE_pft_ping.py=	0555
${PACKAGE}FILESMODE_CVE-2019-5597.py=	0555

.include <bsd.test.mk>
