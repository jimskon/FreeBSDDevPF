# $FreeBSD: releng/12.1/usr.bin/clang/llvm-objdump/Makefile 346168 2019-04-12 20:03:27Z dim $

PROG_CXX=	llvm-objdump

SRCDIR=		tools/llvm-objdump
SRCS+=		COFFDump.cpp
SRCS+=		ELFDump.cpp
SRCS+=		MachODump.cpp
SRCS+=		WasmDump.cpp
SRCS+=		llvm-objdump.cpp

LIBADD+=	z

.include "../llvm.prog.mk"
