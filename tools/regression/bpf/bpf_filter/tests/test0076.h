/*-
 * Test 0076:	Check boundary conditions (BPF_LDX+BPF_MEM)
 *
 * $FreeBSD: releng/12.1/tools/regression/bpf/bpf_filter/tests/test0076.h 307708 2016-10-21 06:56:30Z jkim $
 */

/* BPF program */
static struct bpf_insn	pc[] = {
	BPF_STMT(BPF_LD+BPF_IMM, 0xdeadc0de),
	BPF_STMT(BPF_LDX+BPF_MEM, 0x8fffffff),
	BPF_STMT(BPF_MISC+BPF_TXA, 0),
	BPF_STMT(BPF_RET+BPF_A, 0),
};

/* Packet */
static u_char	pkt[] = {
	0x00,
};

/* Packet length seen on wire */
static u_int	wirelen =	sizeof(pkt);

/* Packet length passed on buffer */
static u_int	buflen =	sizeof(pkt);

/* Invalid instruction */
static int	invalid =	1;

/* Expected return value */
static u_int	expect =	0xdeadc0de;

/* Expected signal */
#ifdef __amd64__
static int	expect_signal =	SIGBUS;
#else
static int	expect_signal =	SIGSEGV;
#endif
