#! /usr/bin/awk -f
# $FreeBSD: releng/12.1/tests/sys/cddl/zfs/include/translatecommands.awk 329867 2018-02-23 16:31:00Z asomers $

BEGIN {
	print "# This file is autogenerated from commands.txt. Do not edit"
	cmdstring = "export CMDS=\""
	cmdch = 1
	cmd_idx=0
}

# Strip comments
{
	gsub(/#.*/, "", $0)
}

# Strip blank lines
/^[ ]*$/ {
	next
}

# Process remaining lines
{
	gsub(/%%STFSUITEDIR%%/, stfsuitedir, $1)
	fullcmd = $1
	cmdname = $1
	gsub(/.*\//, "", cmdname)
	CMDNAME = toupper(cmdname)
	allcmds[cmd_idx] = CMDNAME
	cmd_idx += 1
	printf "export %s=\"%s\"\n", CMDNAME, fullcmd
}

# Print CMDS
END {
	print ""
	printf "export CMDS=\""
	for (idx in allcmds)
		printf "$%s ", allcmds[idx]
	print "\""
}
