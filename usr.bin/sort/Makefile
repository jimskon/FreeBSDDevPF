# $FreeBSD: releng/12.1/usr.bin/sort/Makefile 338265 2018-08-23 18:18:43Z arichardson $

.include <src.opts.mk>

PROG=	sort

SRCS=	bwstring.c coll.c file.c mem.c radixsort.c sort.c vsort.c

sort.1: sort.1.in
	sed ${MAN_SUB} ${.ALLSRC} >${.TARGET}

CLEANFILES+= sort.1

.if ${MK_SORT_THREADS} != "no"
CFLAGS+= -DSORT_THREADS
LIBADD=	pthread md
MAN_SUB+= -e 's|%%THREADS%%||g'
.else
LIBADD=	md
MAN_SUB+= -e 's|%%THREADS%%|\.\\"|g'
.endif

.if ${MK_NLS} != "no"
NLS+=	hu_HU.ISO8859-2
NLSSRCFILES= ${NLS:S@$@.msg@}
MAN_SUB+= -e 's|%%NLS%%||g'
.for lang in ${NLS}
NLSSRCDIR_${lang}= ${.CURDIR}/nls
.endfor
.else
CFLAGS+= -DWITHOUT_NLS
MAN_SUB+= -e 's|%%NLS%%|\.\\"|g'
.endif

#HAS_TESTS=
#SUBDIR.${MK_TESTS}+= tests

.include <bsd.prog.mk>
