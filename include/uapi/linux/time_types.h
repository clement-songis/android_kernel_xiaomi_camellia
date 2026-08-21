/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */
#ifndef _UAPI_LINUX_TIME_TYPES_H
#define _UAPI_LINUX_TIME_TYPES_H

/*
 * The y2038 clean timespec that every syscall added after 4.14 takes: tv_sec is
 * 64 bit and tv_nsec is padded to 64 bit, so the layout does not depend on the
 * caller's word size. 4.14 has no __kernel_time64_t, so the types are spelled
 * out here.
 */
struct __kernel_timespec {
	long long	tv_sec;			/* seconds */
	long long	tv_nsec;		/* nanoseconds */
};

#endif /* _UAPI_LINUX_TIME_TYPES_H */
