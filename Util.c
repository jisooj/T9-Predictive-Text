// CSE 374
// HW 5
// Jisoo Jung
//
// Util.h:
// Implementation of a utility function.

#include "Util.h"

// Allocated 'size' memory to heap and verifies the result.
// If malloc fails, then program exits with error message.
void * mallocVerif(size_t size) {
  void * ptr = malloc(size);
  if (!ptr) {
    printf("Memory allocation failed. Closing this program.");
    exit(EXIT_FAILURE);
  }
  return ptr;
}
