#!/bin/sh
#
# $FreeBSD: releng/12.1/sys/tools/fdt/make_dtbo.sh 340362 2018-11-12 15:18:09Z kevans $

# Script generates dtbo file ($3) from dtso source ($2) in build tree S ($1)
S=$1
dtso="$2"
dtbo_path=$3

if [ -z "$dtso" ]; then
    echo "No DTS overlays specified"
    exit 1
fi

if [ -z "${MACHINE}" ]; then
    MACHINE=$(uname -m)
fi

: ${DTC:=dtc}
: ${ECHO:=echo}

for d in ${dtso}; do
    dtb=${dtbo_path}/`basename $d .dtso`.dtbo
    ${ECHO} "converting $d -> $dtb"
    cpp -P -x assembler-with-cpp -I $S/gnu/dts/include -I $S/dts/${MACHINE} -I $S/gnu/dts/${MACHINE} -include $d /dev/null | 
	${DTC} -@ -O dtb -o $dtb -i $S/dts/${MACHINE} -i $S/gnu/dts/${MACHINE}
done
