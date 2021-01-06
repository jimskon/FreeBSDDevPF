/* $NetBSD: gttf2.c,v 1.1 2011/01/17 10:08:35 matt Exp $ */

/*
 * Written by Matt Thomas, 2011.  This file is in the Public Domain.
 */

#include "softfloat-for-gcc.h"
#include "milieu.h"
#include "softfloat.h"

#include <sys/cdefs.h>
__FBSDID("$FreeBSD: releng/12.1/lib/libc/softfloat/gttf2.c 230363 2012-01-20 06:16:14Z das $");

#ifdef FLOAT128

flag __gttf2(float128, float128);

flag
__gttf2(float128 a, float128 b)
{

	/* libgcc1.c says a > b */
	return float128_lt(b, a);
}

#endif /* FLOAT128 */
