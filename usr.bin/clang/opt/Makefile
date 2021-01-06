# $FreeBSD: releng/12.1/usr.bin/clang/opt/Makefile 344212 2019-02-16 15:43:49Z dim $

PROG_CXX=	opt

SRCDIR=		tools/opt
SRCS+=		AnalysisWrappers.cpp
SRCS+=		BreakpointPrinter.cpp
SRCS+=		Debugify.cpp
SRCS+=		GraphPrinters.cpp
SRCS+=		NewPMDriver.cpp
SRCS+=		PassPrinters.cpp
SRCS+=		PrintSCC.cpp
SRCS+=		opt.cpp

LIBADD+=	z

.include "../llvm.prog.mk"
