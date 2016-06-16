/***************************************************************************
 *   Copyright (C) 2004-2016      Gydle Inc.                               *
 *                                                                         *
 ***************************************************************************/

#define ENABLE_TRACER

#ifdef ENABLE_TRACER

#undef TRACEPOINT_PROVIDER
#define TRACEPOINT_PROVIDER gydle_om

#undef TRACEPOINT_INCLUDE
#define TRACEPOINT_INCLUDE "tracepoints.h"

#if !defined(GYDLE_LTTNG_H) || defined(TRACEPOINT_HEADER_MULTI_READ)
#define GYDLE_LTTNG_H

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



#endif /* GYDLE_LTTNG_H */

#include <lttng/tracepoint-event.h>



#endif
