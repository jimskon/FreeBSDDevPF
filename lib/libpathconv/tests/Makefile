# $FreeBSD: releng/12.1/lib/libpathconv/tests/Makefile 315037 2017-03-11 00:08:46Z asomers $

TAP_TESTS_C+=	abs2rel
TAP_TESTS_C+=	rel2abs

WARNS?=		6
#LIBADD+=	pathconv
#LDADD+= -L .. -lpathconv
LDADD+= ../libpathconv.a

.include <bsd.test.mk>
