# $FreeBSD: releng/12.1/secure/lib/libcrypto/engines/Makefile.inc 339270 2018-10-09 21:28:26Z gjb $

SHLIBDIR?= /usr/lib/engines

LCRYPTO_SRC=	${SRCTOP}/crypto/openssl

CFLAGS+=	-I${LCRYPTO_SRC}/engines
CFLAGS+=	-I${LCRYPTO_SRC}/include
CFLAGS+=	-I${OBJTOP}/secure/lib/libcrypto

.include <bsd.endian.mk>

.if ${TARGET_ENDIANNESS} == 1234
CFLAGS+=	-DL_ENDIAN
.elif ${TARGET_ENDIANNESS} == 4321
CFLAGS+=	-DB_ENDIAN
.endif
CFLAGS+=	-DNDEBUG

.PATH: ${LCRYPTO_SRC}/engines
