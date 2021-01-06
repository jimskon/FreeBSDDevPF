# $FreeBSD: releng/12.1/libexec/rtld-elf/tests/target/Makefile 315040 2017-03-11 00:10:40Z asomers $

.include <bsd.own.mk>

PROG=		target
BINDIR=		${TESTSBASE}/libexec/rtld-elf

WARNS?=		3
CFLAGS+=	-I${.CURDIR}/../libpythagoras

LDFLAGS+=	-L${.OBJDIR}/../libpythagoras
DPADD+=		${.OBJDIR}/../libpythagoras/libpythagoras.a
LDADD=		-lpythagoras

MAN=

.include <bsd.prog.mk>
