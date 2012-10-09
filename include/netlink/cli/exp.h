/*
 * netlink/cli/exp.h	CLI Expectation Helper
 *
 *	This library is free software; you can redistribute it and/or
 *	modify it under the terms of the GNU Lesser General Public
 *	License as published by the Free Software Foundation version 2.1
 *	of the License.
 *
 * Copyright (c) 2012 Rich Fought <Rich.Fought@watchguard.com>
 */

#ifndef __NETLINK_CLI_EXP_H_
#define __NETLINK_CLI_EXP_H_

#include <netlink/netfilter/exp.h>
#include <linux/netfilter/nf_conntrack_common.h>

extern struct nfnl_exp *nl_cli_exp_alloc(void);
extern struct nl_cache *nl_cli_exp_alloc_cache(struct nl_sock *);

extern void nl_cli_exp_parse_family(struct nfnl_exp *, char *);
extern void nl_cli_exp_parse_timeout(struct nfnl_exp *, char *);
extern void nl_cli_exp_parse_id(struct nfnl_exp *, char *);
extern void nl_cli_exp_parse_src(struct nfnl_exp *, int, char *);
extern void nl_cli_exp_parse_dst(struct nfnl_exp *, int, char *);
extern void nl_cli_exp_parse_l4protonum(struct nfnl_exp *, int, char *);
extern void nl_cli_exp_parse_src_port(struct nfnl_exp *, int, char *);
extern void nl_cli_exp_parse_dst_port(struct nfnl_exp *, int, char *);

#endif
