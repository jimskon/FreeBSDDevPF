# Makefile for syscall tables
#
# $FreeBSD: releng/12.1/sys/amd64/linux32/Makefile 351567 2019-08-28 08:05:16Z brooks $

# Don't use an OBJDIR
.OBJDIR: ${.CURDIR}

all:
	@echo "make sysent only"

sysent:  linux32_sysent.c linux32_syscall.h linux32_proto.h linux32_syscalls.c linux32_systrace_args.c

linux32_sysent.c linux32_syscall.h linux32_proto.h linux32_syscalls.c linux32_systrace_args.c: ../../kern/makesyscalls.sh \
		syscalls.master ${.CURDIR}/syscalls.conf
	sh ../../kern/makesyscalls.sh syscalls.master ${.CURDIR}/syscalls.conf
