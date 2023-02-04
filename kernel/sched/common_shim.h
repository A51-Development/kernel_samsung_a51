#include <linux/sched/cpufreq.h>
#include <uapi/linux/sched/types.h>
#include <linux/version.h>

#define INT_RETURN_TO_VOID(name) \
	static void name ##_shim(struct cpufreq_policy *cp) \
	{	name(cp);	}

#define COMMON_GOVORNOR_SHIM(name) \
	INT_RETURN_TO_VOID(name ##_exit) \
	INT_RETURN_TO_VOID(name ##_stop) \
	INT_RETURN_TO_VOID(name ##_limits)

#define COMMON_GOVORNOR_COMPAT(name) \
	.init = name ##_init, \
	.exit = name ##_exit_shim, \
	.start = name ##_start, \
	.stop = name ##_stop_shim, \
	.limits = name ##_limits_shim,

// TODO: Is the 4.9.0 correct?
#if LINUX_VERSION_CODE > KERNEL_VERSION(4, 9, 0)
#define USE_NEW_STRUCT
#endif
