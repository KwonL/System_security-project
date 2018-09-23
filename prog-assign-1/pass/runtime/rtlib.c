#include <stdio.h>
#include <limits.h>

int check_overflow() {
  return 0;
}

// TODO: Change function prototype if necessary.
void logop(int res, int linenum, int arg1, int arg2, char* opcode) {
  printf("[LOG] Computed %d at line %d\n", res, linenum);

  // TODO: Produce warning if the integer overflow is found
  if (1) {
    return;
  }
}

