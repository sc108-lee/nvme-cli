/* SPDX-License-Identifier: GPL-2.0-or-later */
#undef CMD_INC_FILE
#define CMD_INC_FILE plugins/amzn/amzn-nvme

#if !defined(AMZN_NVME) || defined(CMD_HEADER_MULTI_READ)
#define AMZN_NVME

#include "cmd.h"

PLUGIN(NAME("amzn", "Amazon vendor specific extensions", NVME_VERSION),
	COMMAND_LIST(
		ENTRY("id-ctrl", "Send NVMe Identify Controller", id_ctrl)
		ENTRY("stats", "Get EBS volume stats", get_stats)
	)
);

#endif

#include "define_cmd.h"
