
#undef TRACEPOINT_PROVIDER
#define TRACEPOINT_PROVIDER gydle_om

#undef TRACEPOINT_INCLUDE
#define TRACEPOINT_INCLUDE "tracepoint-provider.h"

#if !defined(MY_TRACEPOINT_PROVIDER_H) || defined(TRACEPOINT_HEADER_MULTI_READ)
#define MY_TRACEPOINT_PROVIDER_H

#include <lttng/tracepoint.h>

TRACEPOINT_EVENT(
    TRACEPOINT_PROVIDER,
    alignQueryToTargetsTwoStrands_enter,
    TP_ARGS(
        const char*, queryName
        ),
    TP_FIELDS(
        ctf_string(queryName, queryName)
        )
    )

#endif /* MY_TRACEPOINT_PROVIDER_H */

#include <lttng/tracepoint-event.h>

