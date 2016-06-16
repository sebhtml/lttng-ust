
#define TRACEPOINT_DEFINE

#include "tracepoint-provider.h"

void
align()
{
    tracepoint(
        gydle_om,
        alignQueryToTargetsTwoStrands_enter,
        "molecule-foo"
        );
}


