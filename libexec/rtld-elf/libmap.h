/*
 * $FreeBSD: releng/12.1/libexec/rtld-elf/libmap.h 344011 2019-02-11 15:02:02Z kib $
 */

int	lm_init (char *);
void	lm_fini (void);
char *	lm_find (const char *, const char *);
char *	lm_findn (const char *, const char *, const size_t);
