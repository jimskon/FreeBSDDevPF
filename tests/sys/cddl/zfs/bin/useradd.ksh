#! /usr/local/bin/ksh93 -p

# $FreeBSD: releng/12.1/tests/sys/cddl/zfs/bin/useradd.ksh 329867 2018-02-23 16:31:00Z asomers $

a=
g=
for i in $*
do
	a="$a $g"
	g=$i
done
	
/usr/sbin/pw useradd $g $a
