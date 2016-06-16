
#define TRACEPOINT_DEFINE

#include "tracepoints.h"

void
test()
{
    tracepoint(
        gydle_om,
        alignQueryToTargetsTwoStrands_enter,
        "molecule-bar"
        );
}


