# $FreeBSD: releng/12.1/tests/sys/cddl/zfs/tests/cli_root/zpool/Makefile 329867 2018-02-23 16:31:00Z asomers $

.include <src.opts.mk>

PACKAGE=tests
TESTSDIR=${TESTSBASE}/sys/cddl/zfs/tests/cli_root/zpool
FILESDIR=${TESTSDIR}

ATF_TESTS_KSH93+=	zpool_test
TEST_METADATA+=		required_user="root"
TEST_METADATA+=		is_exclusive=true

${PACKAGE}FILES+=	zpool_001_neg.ksh
${PACKAGE}FILES+=	cleanup.ksh
${PACKAGE}FILES+=	zpool.cfg
${PACKAGE}FILES+=	zpool_003_pos.ksh
${PACKAGE}FILES+=	zpool_002_pos.ksh
${PACKAGE}FILES+=	setup.ksh

.include <bsd.test.mk>
