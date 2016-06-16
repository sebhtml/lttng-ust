
#define TRACEPOINT_DEFINE

#include "tracepoint-provider.h"

void
test()
{
    tracepoint(
        gydle_om,
        alignQueryToTargetsTwoStrands_enter,
        "molecule-bar"
        );
}


