#include "platform.h"

static const vc2_platform_info g_info = {
    "host-stub",
    1u
};

int vc2_platform_init(void) { return 0; }
void vc2_platform_shutdown(void) {}
const vc2_platform_info *vc2_platform_get_info(void) { return &g_info; }
