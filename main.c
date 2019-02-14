#include <stdio.h>
#include "gcd.h"

void printGCD(long a, long b, long expected) {
  long g = gcd(a, b);
  printf("gcd(%d, %d) = %d [expected %d]\n",
         a,
         b,
         c,
         expected);
} // printGCD

int main() {
  printGCD(54, 24, 6);
  return 0;
} // main

