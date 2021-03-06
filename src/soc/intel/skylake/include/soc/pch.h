/*
 * This file is part of the coreboot project.
 *
 * Copyright (C) 2008-2009 coresystems GmbH
 * Copyright (C) 2014 Google Inc.
 * Copyright (C) 2015 Intel Corporation.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef _SOC_PCH_H_
#define _SOC_PCH_H_

#include <device/device.h>
#include <rules.h>

/* PCH (SunRisePoint LP) */
#define PCH_SPT_LP_SAMPLE		0x9d41
#define PCH_SPT_LP_U_BASE		0x9d43
#define PCH_SPT_LP_U_PREMIUM		0x9d48
#define PCH_SPT_LP_Y_PREMIUM		0x9d46
#define PCH_SPT_H_C236			0xa150
#define PCH_SPT_H_PREMIUM		0xa14e
#define PCH_SPT_H_QM170			0xa14d
#define PCH_KBL_LP_Y_PREMIUM_HDCP22	0x9d4b
#define PCH_KBL_LP_U_PREMIUM		0x9d58
#define PCH_KBL_LP_Y_PREMIUM		0x9d56

u8 pch_revision(void);
u16 pch_type(void);
u32 pch_read_soft_strap(int id);
void pch_log_state(void);
#if ENV_RAMSTAGE
void pch_disable_devfn(device_t dev);
#endif

#endif /* _SOC_PCH_H_ */
