#!/bin/sh
# $FreeBSD: releng/12.1/tools/regression/usb/usb_enum.t 232364 2012-03-01 20:45:17Z hselasky $

#
# About:
# This script implements a simple USB enumeration test
#
# Usage:
# ./usb_enum.t ugenX.Y
#

echo "1..100"

if [ "$1" = "" ]; then
# First Root HUB
DEV="ugen0.1"
else
# Custom device
DEV="$1"
fi

for N in $(jot 100 1)
do
if [ -c /dev/$DEV ] && [ -r /dev/$DEV ] && usbconfig -d $DEV reset ; then
echo "ok $N"
else
echo "not ok $N"
fi
done

