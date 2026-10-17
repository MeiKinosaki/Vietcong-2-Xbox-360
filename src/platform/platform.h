#ifndef VC2_PLATFORM_H
#define VC2_PLATFORM_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct vc2_platform_info {
    const char *name;
    uint32_t api_version;
} vc2_platform_info;

/* Platform-neutral entry points. Backend implementations are added later. */
int vc2_platform_init(void);
void vc2_platform_shutdown(void);
const vc2_platform_info *vc2_platform_get_info(void);

#ifdef __cplusplus
}
#endif
#endif
