# $FreeBSD: releng/12.1/tests/sys/net/if_tun_test.sh 345287 2019-03-19 00:29:18Z kp $

. $(atf_get_srcdir)/../common/vnet.subr

atf_test_case "235704" "cleanup"
235704_head()
{
	atf_set descr "Test PR #235704"
	atf_set require.user root
}

235704_body()
{
	vnet_init
	vnet_mkjail one

	tun=$(jexec one ifconfig tun create)
	jexec one ifconfig ${tun} name foo
	atf_check -s exit:0 jexec one ifconfig foo destroy
}

235704_cleanup()
{
	vnet_cleanup
}

atf_init_test_cases()
{
	atf_add_test_case "235704"
}
