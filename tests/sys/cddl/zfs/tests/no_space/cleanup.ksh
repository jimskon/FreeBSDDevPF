#!/usr/local/bin/ksh93 -p
#
# CDDL HEADER START
#
# The contents of this file are subject to the terms of the
# Common Development and Distribution License (the "License").
# You may not use this file except in compliance with the License.
#
# You can obtain a copy of the license at usr/src/OPENSOLARIS.LICENSE
# or http://www.opensolaris.org/os/licensing.
# See the License for the specific language governing permissions
# and limitations under the License.
#
# When distributing Covered Code, include this CDDL HEADER in each
# file and include the License file at usr/src/OPENSOLARIS.LICENSE.
# If applicable, add the following below this CDDL HEADER, with the
# fields enclosed by brackets "[]" replaced with your own identifying
# information: Portions Copyright [yyyy] [name of copyright owner]
#
# CDDL HEADER END
#

# $FreeBSD: releng/12.1/tests/sys/cddl/zfs/tests/no_space/cleanup.ksh 329867 2018-02-23 16:31:00Z asomers $

#
# Copyright 2009 Sun Microsystems, Inc.  All rights reserved.
# Use is subject to license terms.
#
# ident	"@(#)cleanup.ksh	1.3	09/06/22 SMI"
#
. $STF_SUITE/include/libtest.kshlib

verify_runnable "global"

DISK=${DISKS%% *}

ismounted "$TESTPOOL/$TESTFS"
(( $? == 0 )) && \
        log_must $ZFS umount $TESTDIR

destroy_pool $TESTPOOL
#
# Remove 100mb partition.
#
cleanup_devices "$DISK"

log_pass
