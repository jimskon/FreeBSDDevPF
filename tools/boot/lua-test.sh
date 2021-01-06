#!/bin/sh
# $FreeBSD: releng/12.1/tools/boot/lua-test.sh 340752 2018-11-22 03:04:13Z kevans $

# Will image the test directory (default /tmp/loadertest) if it doesn't exist

die() {
    echo $*
    exit 1
}

dir=$1
scriptdir=$(dirname $(realpath $0))
cd $(make -V SRCTOP)/stand
obj=$(make -V .OBJDIR)
t=$obj/userboot/test/test

[ -n "$dir" ] || dir=/tmp/loadertest
[ -d "$dir" ] || ${scriptdir}/lua-img.sh ${dir}
# We'll try userboot.so from the test directory before plucking it straight out
# of .OBJDIR.
u=$dir/boot/userboot.so
[ -f "$u" ] || u=$obj/userboot/userboot_lua/userboot_lua.so
[ -f "$dir/boot/lua/loader.lua" ] || die "No boot/lua/loader.lua found"
[ -f "$dir/boot/kernel/kernel" ] || die "No kernel to load"
[ -x "$t" ] || die "no userboot test jig found ($t)"
[ -f "$u" ] || die "no userboot.so ($u) found"

$t -h $dir -b $u
