/*-
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * Copyright (c) 1991, 1993
 *	The Regents of the University of California.  All rights reserved.
 * (c) UNIX System Laboratories, Inc.
 * All or some portions of this file are derived from material licensed
 * to the University of California by American Telephone and Telegraph
 * Co. or Unix System Laboratories, Inc. and are reproduced herein with
 * the permission of UNIX System Laboratories, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)timeb.h	8.2 (Berkeley) 1/21/94
 * $FreeBSD: releng/12.1/sys/sys/timeb.h 326023 2017-11-20 19:43:44Z pfg $
 */

#ifndef _SYS_TIMEB_H_
#define _SYS_TIMEB_H_

#ifdef __GNUC__
#warning "this file includes <sys/timeb.h> which is deprecated"
#endif

#include <sys/_types.h>

#ifndef _TIME_T_DECLARED
typedef	__time_t	time_t;
#define	_TIME_T_DECLARED
#endif

/* The ftime(2) system call structure -- deprecated. */
struct timeb {
	time_t	time;			/* seconds since the Epoch */
	unsigned short millitm;		/* + milliseconds since the Epoch */
	short	timezone;		/* minutes west of CUT */
	short	dstflag;		/* DST == non-zero */
};

#ifndef _KERNEL
#include <sys/cdefs.h>

__BEGIN_DECLS
int ftime(struct timeb *);
__END_DECLS
#endif /* _KERNEL */

#endif /* !_SYS_TIMEB_H_ */
