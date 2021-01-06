/*-
 * Copyright (c) 2003-2007 Tim Kientzle
 * Copyright (c) 2009 Michihiro NAKAJIMA
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR(S) ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR(S) BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
#include "test.h"
__FBSDID("$FreeBSD: releng/12.1/contrib/libarchive/libarchive/test/test_read_format_isojoliet_long.c 299529 2016-05-12 10:16:16Z mm $");

/*
Execute the following to rebuild the data for this program:
   tail -n +35 test_read_format_isojoliet_long.c | /bin/sh

rm -rf /tmp/iso
mkdir /tmp/iso
num=0
file="";
while [ $num -lt 100 ]
do
  num=$((num+10))
  file="${file}1234567890"
done
dir="${file}dir"
mkdir /tmp/iso/${dir}
file="${file}123"
echo "hello" > /tmp/iso/${file}
ln /tmp/iso/${file} /tmp/iso/hardlink
if [ "$(uname -s)" = "Linux" ]; then # gnu coreutils touch doesn't have -h
TZ=utc touch -afm -t 197001020000.01 /tmp/iso /tmp/iso/${file} /tmp/iso/${dir}
else
TZ=utc touch -afhm -t 197001020000.01 /tmp/iso /tmp/iso/${file} /tmp/iso/${dir}
fi
F=test_read_format_iso_joliet_long.iso.Z
mkhybrid -J -joliet-long -uid 1 -gid 2 /tmp/iso | compress > $F
uuencode $F $F > $F.uu
rm -rf /tmp/iso
exit 1
 */

DEFINE_TEST(test_read_format_isojoliet_long)
{
	const char *refname = "test_read_format_iso_joliet_long.iso.Z";
	char pathname[104];
	struct archive_entry *ae;
	struct archive *a;
	const void *p;
	size_t size;
	int64_t offset;
	int i;

	for (i = 0; i < 100; i++)
		pathname[i] = '0' + ((i+1) % 10); 
	extract_reference_file(refname);
	assert((a = archive_read_new()) != NULL);
	assertEqualInt(0, archive_read_support_filter_all(a));
	assertEqualInt(0, archive_read_support_format_all(a));
	assertEqualInt(ARCHIVE_OK,
	    archive_read_set_options(a, "iso9660:!rockridge"));
	assertEqualInt(ARCHIVE_OK,
	    archive_read_open_filename(a, refname, 10240));

	/* First entry is '.' root directory. */
	assertEqualInt(0, archive_read_next_header(a, &ae));
	assertEqualString(".", archive_entry_pathname(ae));
	assertEqualInt(AE_IFDIR, archive_entry_filetype(ae));
	assertEqualInt(2048, archive_entry_size(ae));
	assertEqualInt(86401, archive_entry_mtime(ae));
	assertEqualInt(0, archive_entry_mtime_nsec(ae));
	assertEqualInt(86401, archive_entry_ctime(ae));
	assertEqualInt(3, archive_entry_stat(ae)->st_nlink);
	assertEqualInt(0, archive_entry_uid(ae));
	assertEqualIntA(a, ARCHIVE_EOF,
	    archive_read_data_block(a, &p, &size, &offset));
	assertEqualInt((int)size, 0);
	assertEqualInt(archive_entry_is_encrypted(ae), 0);
	assertEqualIntA(a, archive_read_has_encrypted_entries(a), ARCHIVE_READ_FORMAT_ENCRYPTION_UNSUPPORTED);

	/* A directory. */
	pathname[100] = 'd';
	pathname[101] = 'i';
	pathname[102] = 'r';
	pathname[103] = '\0';
	assertEqualInt(0, archive_read_next_header(a, &ae));
	assertEqualString(pathname, archive_entry_pathname(ae));
	assertEqualInt(AE_IFDIR, archive_entry_filetype(ae));
	assertEqualInt(2048, archive_entry_size(ae));
	assertEqualInt(86401, archive_entry_mtime(ae));
	assertEqualInt(86401, archive_entry_atime(ae));
	assertEqualInt(archive_entry_is_encrypted(ae), 0);
	assertEqualIntA(a, archive_read_has_encrypted_entries(a), ARCHIVE_READ_FORMAT_ENCRYPTION_UNSUPPORTED);

	/* A regular file with two names (pathname gets returned
	 * first, so it's not marked as a hardlink). */
	pathname[100] = '1';
	pathname[101] = '2';
	pathname[102] = '3';
	pathname[103] = '\0';
	assertEqualInt(0, archive_read_next_header(a, &ae));
	assertEqualString("hardlink", archive_entry_pathname(ae));
	assertEqualInt(AE_IFREG, archive_entry_filetype(ae));
	assert(archive_entry_hardlink(ae) == NULL);
	assertEqualInt(6, archive_entry_size(ae));
	assertEqualInt(0, archive_read_data_block(a, &p, &size, &offset));
	assertEqualInt(6, (int)size);
	assertEqualInt(0, offset);
	assertEqualMem(p, "hello\n", 6);
	assertEqualInt(archive_entry_is_encrypted(ae), 0);
	assertEqualIntA(a, archive_read_has_encrypted_entries(a), ARCHIVE_READ_FORMAT_ENCRYPTION_UNSUPPORTED);

	/* Second name for the same regular file (this happens to be
	 * returned second, so does get marked as a hardlink). */
	assertEqualInt(0, archive_read_next_header(a, &ae));
	assertEqualString(pathname, archive_entry_pathname(ae));
	assertEqualInt(AE_IFREG, archive_entry_filetype(ae));
	assertEqualString("hardlink", archive_entry_hardlink(ae));
	assert(!archive_entry_size_is_set(ae));
	assertEqualInt(archive_entry_is_encrypted(ae), 0);
	assertEqualIntA(a, archive_read_has_encrypted_entries(a), ARCHIVE_READ_FORMAT_ENCRYPTION_UNSUPPORTED);

	/* End of archive. */
	assertEqualInt(ARCHIVE_EOF, archive_read_next_header(a, &ae));

	/* Verify archive format. */
	assertEqualInt(archive_filter_code(a, 0), ARCHIVE_FILTER_COMPRESS);

	/* Close the archive. */
	assertEqualIntA(a, ARCHIVE_OK, archive_read_close(a));
	assertEqualInt(ARCHIVE_OK, archive_read_free(a));
}

