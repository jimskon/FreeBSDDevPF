# $FreeBSD: releng/12.1/lib/googletest/gmock/tests/Makefile 344424 2019-02-21 06:51:35Z ngie $

.include <bsd.init.mk>

.PATH: ${GOOGLEMOCK_SRCROOT}/src ${GOOGLEMOCK_SRCROOT}/test

GTESTS+=	gmock_stress_test

LIBADD+=	pthread gtest gmock

# The next release will resolve a number of build warnings issues.
NO_WERROR=

.include <bsd.test.mk>
