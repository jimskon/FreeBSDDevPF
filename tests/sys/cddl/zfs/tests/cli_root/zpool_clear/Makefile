# $FreeBSD: releng/12.1/tests/sys/cddl/zfs/tests/cli_root/zpool_clear/Makefile 329867 2018-02-23 16:31:00Z asomers $

.include <src.opts.mk>

PACKAGE=tests
TESTSDIR=${TESTSBASE}/sys/cddl/zfs/tests/cli_root/zpool_clear
FILESDIR=${TESTSDIR}

ATF_TESTS_KSH93+=	zpool_clear_test
TEST_METADATA+=		required_user="root"
TEST_METADATA+=		is_exclusive=true

${PACKAGE}FILES+=	cleanup.ksh
${PACKAGE}FILES+=	zpool_clear_003_neg.ksh
${PACKAGE}FILES+=	zpool_clear_002_neg.ksh
${PACKAGE}FILES+=	zpool_clear.cfg
${PACKAGE}FILES+=	zpool_clear_001_pos.ksh
${PACKAGE}FILES+=	zpool_clear_004_pos.ksh
${PACKAGE}FILES+=	zpool_clear_005_pos.ksh

.include <bsd.test.mk>
