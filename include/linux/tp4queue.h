#ifndef _LINUX_TP4QUEUE_H
#define _LINUX_TP4QUEUE_H

struct tpacket4_desc;
struct page;

struct tpacket4_queue_kernel {
	struct tpacket4_desc *vring;

	unsigned int used_idx;
	unsigned int last_avail_idx;
	unsigned int ring_size;
};

struct tpacket4_buffers {
	struct page **pages;
	unsigned int npages;
};

int tp4ring_get_avail(struct tpacket4_queue_kernel *q,
		      struct tpacket4_desc *d, int dcnt);

int tp4ring_add_used(struct tpacket4_queue_kernel *q,
		     const struct tpacket4_desc *d, int dcnt);

#endif /* _LINUX_TP4QUEUE_H */
