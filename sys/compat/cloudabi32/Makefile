# $FreeBSD: releng/12.1/sys/compat/cloudabi32/Makefile 351567 2019-08-28 08:05:16Z brooks $

# Don't use an OBJDIR
.OBJDIR: ${.CURDIR}

all:
	@echo "make sysent only"

sysent: cloudabi32_sysent.c cloudabi32_syscall.h cloudabi32_proto.h \
    cloudabi32_syscalls.c cloudabi32_systrace_args.c

cloudabi32_sysent.c cloudabi32_syscall.h cloudabi32_proto.h \
    cloudabi32_syscalls.c cloudabi32_systrace_args.c: \
    ../../kern/makesyscalls.sh ../../contrib/cloudabi/syscalls32.master \
    ${.CURDIR}/syscalls.conf
	sh ../../kern/makesyscalls.sh ../../contrib/cloudabi/syscalls32.master \
	    ${.CURDIR}/syscalls.conf
