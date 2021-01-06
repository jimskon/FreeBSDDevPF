/* $FreeBSD: releng/12.1/lib/csu/riscv/crt.h 352394 2019-09-16 13:41:24Z andrew $ */

#ifndef _CRT_H_
#define _CRT_H_

#define	HAVE_CTORS
#define	INIT_CALL_SEQ(func)	"call " __STRING(func)

#endif
