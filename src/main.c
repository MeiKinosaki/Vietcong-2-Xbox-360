#include <stdio.h>
#include "platform/platform.h"

int main(void) {
    const vc2_platform_info *info;
    if (vc2_platform_init() != 0) {
        fputs("Vietcong 2 Xbox 360: platform init failed\n", stderr);
        return 1;
    }
    info = vc2_platform_get_info();
    printf("Vietcong 2 Xbox 360 port scaffold | backend=%s | api=%u\n",
           info->name, (unsigned)info->api_version);
    vc2_platform_shutdown();
    return 0;
}
