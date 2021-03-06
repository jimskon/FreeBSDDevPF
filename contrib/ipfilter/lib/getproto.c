/*	$FreeBSD: releng/12.1/contrib/ipfilter/lib/getproto.c 344833 2019-03-06 02:37:25Z cy $	*/

/*
 * Copyright (C) 2012 by Darren Reed.
 *
 * See the IPFILTER.LICENCE file for details on licencing.
 *
 * $Id$
 */

#include "ipf.h"
#include <ctype.h>

int getproto(name)
	char *name;
{
	struct protoent *p;
	char *s;

	for (s = name; *s != '\0'; s++)
		if (!ISDIGIT(*s))
			break;
	if (*s == '\0')
		return atoi(name);

	if (!strcasecmp(name, "ip"))
		return 0;

	p = getprotobyname(name);
	if (p != NULL)
		return p->p_proto;
	return -1;
}
