/*-
 * Copyright (c) 2017 Mellanox Technologies, Ltd.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice unmodified, this list of conditions, and the following
 *    disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * $FreeBSD: releng/12.1/sys/compat/linuxkpi/common/include/linux/pfn.h 316033 2017-03-27 17:04:11Z hselasky $
 */

#ifndef _LINUX_PFN_H_
#define	_LINUX_PFN_H_

#include <linux/types.h>

typedef struct {
	u64	val;
} pfn_t;

#define	PFN_ALIGN(x)	(((unsigned long)(x) + PAGE_SIZE - 1) & ~(PAGE_SIZE - 1))
#define	PFN_UP(x)	(((x) + PAGE_SIZE - 1) >> PAGE_SHIFT)
#define	PFN_DOWN(x)	((x) >> PAGE_SHIFT)
#define	PFN_PHYS(x)	((phys_addr_t)(x) << PAGE_SHIFT)
#define	PHYS_PFN(x)	((unsigned long)((x) >> PAGE_SHIFT))

#endif					/* _LINUX_PFN_H_ */
