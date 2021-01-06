# Makefile for syscall tables
#
# $FreeBSD: releng/12.1/sys/arm64/linux/Makefile 351567 2019-08-28 08:05:16Z brooks $

# Don't use an OBJDIR
.OBJDIR: ${.CURDIR}

all:
	@echo "make sysent only"

sysent:  linux_sysent.c linux_syscall.h linux_proto.h linux_syscalls.c linux_systrace_args.c

linux_sysent.c linux_syscall.h linux_proto.h linux_syscalls.c linux_systrace_args.c: \
		../../kern/makesyscalls.sh syscalls.master ${.CURDIR}/syscalls.conf
	sh ../../kern/makesyscalls.sh syscalls.master ${.CURDIR}/syscalls.conf
