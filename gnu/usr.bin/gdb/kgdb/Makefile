# $FreeBSD: releng/12.1/gnu/usr.bin/gdb/kgdb/Makefile 352768 2019-09-26 18:37:58Z emaste $

PROG=	kgdb${GDB_SUFFIX}
SRCS=	main.c kld.c kthr.c trgt.c trgt_${TARGET_CPUARCH}.c
WARNS?=	2

BULIBS= ${OBJ_BU}/libbfd/libbfd${PIE_SUFFIX}.a \
	${OBJ_BU}/libopcodes/libopcodes${PIE_SUFFIX}.a \
	${OBJ_BU}/libiberty/libiberty${PIE_SUFFIX}.a
GDBLIBS= ${OBJ_GDB}/libgdb/libgdb${PIE_SUFFIX}.a

DPADD=	${GDBLIBS} ${BULIBS}
LDADD=	${GDBLIBS} ${BULIBS}
LIBADD+=	m edit ncursesw gnuregex kvm

.include <bsd.prog.mk>
