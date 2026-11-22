/* SPDX-License-Identifier: GPL-2.0-only */
#ifndef __ADRENO_IDLER_H
#define __ADRENO_IDLER_H

#include <linux/devfreq.h>

int adreno_idler(struct devfreq_dev_status stats, struct devfreq *devfreq,
		 unsigned long *freq);
int adreno_idler_init(void);
void adreno_idler_exit(void);

#endif /* __ADRENO_IDLER_H */
