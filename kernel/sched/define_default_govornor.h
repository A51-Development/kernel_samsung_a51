#pragma clang diagnostic ignored "-Wundef"
#pragma GCC diagnostic ignored "-Wundef"

#if defined(GOV_NAME) && defined(GOV_NAME_CAPS)
#ifndef GOV_CPUFREQ
#define GOV_STRUCT_(structname) structname##_gov
#else
#define GOV_STRUCT_(structname) cpufreq_gov_##structname
#endif
#define GOV_STRUCT(name) GOV_STRUCT_(name)
#define CONFIG_DEFAULT_(name) CONFIG_CPU_FREQ_DEFAULT_GOV_##name
#define CONFIG_DEFAULT(name) CONFIG_DEFAULT_(name)

#if CONFIG_DEFAULT(GOV_NAME_CAPS) == 1
struct cpufreq_governor *cpufreq_default_governor(void)
{
	return &GOV_STRUCT(GOV_NAME);
}
#endif
#endif
