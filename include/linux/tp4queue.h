#ifndef _LINUX_TP4QUEUE_H
#define _LINUX_TP4QUEUE_H

#include <linux/if_packet.h>

struct tpacket4_queue_kernel {
	struct tpacket4_desc *vring;

	unsigned int used_idx;
	unsigned int last_avail_idx;
	unsigned int ring_size;
};

#endif /* _LINUX_TP4QUEUE_H */
