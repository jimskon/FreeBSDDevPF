/* $FreeBSD: releng/12.1/lib/libelftc/elftc_version.c 346536 2019-04-22 08:58:33Z ngie $ */

#include <sys/types.h>
#include <libelftc.h>

const char *
elftc_version(void)
{
	return "elftoolchain r3668M";
}
