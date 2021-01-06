/* $OpenBSD: chacha.h,v 1.4 2016/08/27 04:04:56 guenther Exp $ */

/*
chacha-merged.c version 20080118
D. J. Bernstein
Public domain.

 $FreeBSD: releng/12.1/sys/crypto/chacha20/chacha.h 338059 2018-08-19 17:40:50Z delphij $
*/

#ifndef CHACHA_H
#define CHACHA_H

#include <sys/types.h>

struct chacha_ctx {
	u_int input[16];
};

#define CHACHA_MINKEYLEN 	16
#define CHACHA_NONCELEN		8
#define CHACHA_CTRLEN		8
#define CHACHA_STATELEN		(CHACHA_NONCELEN+CHACHA_CTRLEN)
#define CHACHA_BLOCKLEN		64

#ifdef _KERNEL
#define LOCAL
#else
#define LOCAL static
#endif

LOCAL void chacha_keysetup(struct chacha_ctx *x, const u_char *k, u_int kbits);
LOCAL void chacha_ivsetup(struct chacha_ctx *x, const u_char *iv, const u_char *ctr);
LOCAL void chacha_encrypt_bytes(struct chacha_ctx *x, const u_char *m,
    u_char *c, u_int bytes);

#endif	/* CHACHA_H */

