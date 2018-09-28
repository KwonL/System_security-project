#include <stdio.h>
#include <limits.h>

int isOvf(int a, int b) {

  int res = 0;
  res = a > INT_MAX / b;

  return res;
}

// TODO: Change function prototype if necessary.
void logop(int res, int linenum, int arg1,  int arg2) {
  // TODO: Produce warning if the integer overflow is found
  // printf("[WARNING] Integer overflow detected at line %d\n", linenum);
  if (isOvf(arg1, arg2)) 
    printf("[WARNING] Integer overflow detected at line %d\n", linenum);
}