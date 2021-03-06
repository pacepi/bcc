// SPDX-License-Identifier: (LGPL-2.1 OR BSD-2-Clause)
#ifndef __GETHOSTLATENCY_H
#define __GETHOSTLATENCY_H

#define TASK_COMM_LEN 16
#define HOST_LEN 80

struct val_t {
	__u32 pid;
	char comm[TASK_COMM_LEN];
	char host[HOST_LEN];
	__u64 time;
};

#endif /* __GETHOSTLATENCY_H */
