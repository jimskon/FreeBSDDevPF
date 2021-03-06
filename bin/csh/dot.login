# $FreeBSD: releng/12.1/bin/csh/dot.login 337849 2018-08-15 14:41:24Z brd $
#
# .login - csh login script, read by login shell, after `.cshrc' at login.
#
# See also csh(1), environ(7).
#

# Query terminal size; useful for serial lines.
if ( -x /usr/bin/resizewin ) /usr/bin/resizewin -z

# Uncomment to display a random cookie on each login.
# if ( -x /usr/bin/fortune ) /usr/bin/fortune -s
