# Makefile for syscall tables
#
# $FreeBSD: releng/12.1/sys/compat/freebsd32/Makefile 351567 2019-08-28 08:05:16Z brooks $

# Don't use an OBJDIR
.OBJDIR: ${.CURDIR}

all:
	@echo "make sysent only"

sysent:  freebsd32_sysent.c freebsd32_syscall.h freebsd32_proto.h freebsd32_systrace_args.c

freebsd32_sysent.c freebsd32_syscalls.c freebsd32_syscall.h freebsd32_proto.h freebsd32_systrace_args.c : \
	    ../../kern/makesyscalls.sh syscalls.master ${.CURDIR}/syscalls.conf ../../kern/capabilities.conf
	sh ../../kern/makesyscalls.sh syscalls.master ${.CURDIR}/syscalls.conf

clean:
	rm -f freebsd32_sysent.c freebsd32_syscalls.c freebsd32_syscall.h freebsd32_proto.h
	rm -f freebsd32_systrace_args.c 
