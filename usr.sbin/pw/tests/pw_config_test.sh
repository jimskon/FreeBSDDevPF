# $FreeBSD: releng/12.1/usr.sbin/pw/tests/pw_config_test.sh 315776 2017-03-23 03:28:24Z ngie $

# Import helper functions
. $(atf_get_srcdir)/helper_functions.shin

atf_test_case generate_config
generate_config_body() {
	atf_check -s exit:0 \
		${PW} useradd -D -C ${HOME}/foo.conf
	atf_check -o file:$(atf_get_srcdir)/pw.conf \
		cat ${HOME}/foo.conf
}

atf_test_case modify_config_uid_gid_boundaries
modify_config_uid_gid_boundaries_body() {
	atf_check -s exit:0 \
		${PW} useradd -D -C ${HOME}/foo.conf \
			-u 2000,5000 -i 2100,6000
	atf_check -o file:$(atf_get_srcdir)/pw-modified.conf \
		cat ${HOME}/foo.conf
}

atf_init_test_cases() {
	atf_add_test_case generate_config
	atf_add_test_case modify_config_uid_gid_boundaries
}
