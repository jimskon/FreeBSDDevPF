# $FreeBSD: releng/12.1/libexec/rc/Makefile 339417 2018-10-18 02:07:30Z bz $

CONFGROUPS=	CONFETC CONFETCEXEC CONFETCDEFAULTS
CONFETCDIR=	/etc
CONFETC=	network.subr rc rc.initdiskless rc.subr rc.shutdown
CONFETCMODE=	644
CONFETCEXEC=	netstart pccard_ether rc.resume rc.suspend
CONFETCEXECDIR=	/etc
CONFETCEXECMODE=	755
CONFETCDEFAULTSDIR=	/etc/defaults
CONFETCDEFAULTS=	rc.conf
#PACKAGE=rc

SUBDIR+=	rc.d

.include <bsd.prog.mk>
