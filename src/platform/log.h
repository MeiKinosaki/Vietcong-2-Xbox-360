#ifndef VC2_LOG_H
#define VC2_LOG_H
#ifdef __cplusplus
extern "C" {
#endif
typedef enum vc2_log_level {
    VC2_LOG_DEBUG = 0,
    VC2_LOG_INFO = 1,
    VC2_LOG_WARN = 2,
    VC2_LOG_ERROR = 3
} vc2_log_level;
/* The host stub writes messages to stderr; target backends may replace it. */
void vc2_log_write(vc2_log_level level, const char *message);
#ifdef __cplusplus
}
#endif
#endif
