/*-
 * Copyright (c) 2015-2016 Andriy Voskoboinyk <avos@FreeBSD.org>
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 *
 * $FreeBSD: releng/12.1/sys/dev/rtwn/if_rtwn_tx.h 308575 2016-11-12 17:58:37Z avos $
 */

#ifndef IF_RTWN_TX_H
#define IF_RTWN_TX_H

void	rtwn_drain_mbufq(struct rtwn_softc *);
#ifdef IEEE80211_SUPPORT_SUPERG
void	rtwn_ff_flush_all(struct rtwn_softc *, union sec_param *);
#endif
int	rtwn_transmit(struct ieee80211com *, struct mbuf *);
void	rtwn_start(struct rtwn_softc *);
int	rtwn_raw_xmit(struct ieee80211_node *, struct mbuf *,
	    const struct ieee80211_bpf_params *);

#endif	/* IF_RTWN_TX_H */
