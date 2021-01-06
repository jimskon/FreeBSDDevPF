#	$FreeBSD: releng/12.1/usr.sbin/makefs/msdos/Makefile.inc 352079 2019-09-09 17:32:40Z emaste $
#

MSDOS=		${SRCTOP}/sys/fs/msdosfs
MSDOS_NEWFS=	${SRCTOP}/sbin/newfs_msdos

.PATH:	${SRCDIR}/msdos ${MSDOS} ${MSDOS_NEWFS}

CFLAGS+= -I${MSDOS} -I${MSDOS_NEWFS}

SRCS+= mkfs_msdos.c
SRCS+= msdosfs_conv.c msdosfs_denode.c msdosfs_fat.c msdosfs_lookup.c
SRCS+= msdosfs_vnops.c msdosfs_vfsops.c
