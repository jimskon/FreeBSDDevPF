# $FreeBSD: releng/12.1/stand/powerpc/Makefile 348686 2019-06-05 12:53:36Z luporl $

NO_OBJ=t

.include <bsd.init.mk>

SUBDIR.yes=		boot1.chrp ofw uboot

.if "${TARGET_ARCH}" == "powerpc64"
SUBDIR.${MK_FDT}+=	kboot
.endif

.include <bsd.subdir.mk>
