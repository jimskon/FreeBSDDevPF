# $FreeBSD: releng/12.1/kerberos5/usr.bin/verify_krb5_conf/Makefile 344199 2019-02-16 03:18:09Z nyan $

PROG=	verify_krb5_conf
MAN=	verify_krb5_conf.8
CFLAGS+=-I${KRB5DIR}/lib/asn1 -I${KRB5DIR}/lib/krb5 -I${KRB5DIR}/lib/roken \
	-I${SRCTOP}/contrib/com_err
LIBADD=	krb5 roken vers

.include <bsd.prog.mk>

.PATH: ${KRB5DIR}/lib/krb5
