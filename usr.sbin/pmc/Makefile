#
# $FreeBSD: releng/12.1/usr.sbin/pmc/Makefile 348138 2019-05-23 01:09:10Z ngie $
#

.include <src.opts.mk>
PROG_CXX=	pmc
MAN=	
WARNS?=	3
CXXFLAGS+= -O0
CXXSTD= c++14
CWARNFLAGS.gcc+= -Wno-redundant-decls

LIBADD=	kvm pmc m ncursesw pmcstat elf

SRCS=	pmc.c pmc_util.c cmd_pmc_stat.c \
	cmd_pmc_list.c cmd_pmc_filter.cc \
	cmd_pmc_summary.cc

.include <bsd.prog.mk>
