// CSE 374
// HW 5
// Jisoo Jung
//
// Util.h:
// Interface for a utility function.

#ifndef UTIL_H
#define UTIL_H

#include <stdlib.h>
#include <stdio.h>

// Allocated 'size' memory to heap and verifies the result.
// If malloc fails, then program exits with error message.
void * mallocVerif(size_t size);

#endif
