
#define TRACEPOINT_DEFINE

#include "tracepoints.h"

void
align()
{
    tracepoint(
        gydle_om,
        alignQueryToTargetsTwoStrands_enter,
        "molecule-foo"
        );
}


