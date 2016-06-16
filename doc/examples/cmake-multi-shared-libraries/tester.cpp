
#include "aligner-lib.h"
#include "tester-lib.h"

int
main(int argc, char ** argv)
{
    // Generate alignments
    align();

    // Test the alignments
    test();

    return 0;
}
