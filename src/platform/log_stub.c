#include "log.h"
#include <stdio.h>
static const char *level_name(vc2_log_level level) {
    switch (level) {
        case VC2_LOG_DEBUG: return "DEBUG";
        case VC2_LOG_INFO: return "INFO";
        case VC2_LOG_WARN: return "WARN";
        case VC2_LOG_ERROR: return "ERROR";
        default: return "UNKNOWN";
    }
}
void vc2_log_write(vc2_log_level level, const char *message) {
    if (message == 0) message = "(null)";
    (void)fprintf(stderr, "[VC2][%s] %s\n", level_name(level), message);
}
