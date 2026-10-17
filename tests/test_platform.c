#include <assert.h>
#include "platform/platform.h"

int main(void) {
    const vc2_platform_info *info;
    assert(vc2_platform_init() == 0);
    info = vc2_platform_get_info();
    assert(info != 0);
    assert(info->name != 0);
    assert(info->api_version == 1u);
    vc2_platform_shutdown();
    return 0;
}
