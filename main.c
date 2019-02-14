#include <stdio.h>
#include "gcd.h"

void printGCD(long a, long b, long expected) {
  long g = gcd(a, b);
  printf("gcd(%d, %d) = %d [expected %d]\n", a, b, g, expected);
} // printGCD

int main() {
  printGCD( 54, 24,  6);
  printGCD( 24, 24, 24);
  printGCD(256,  2,  2);
  printGCD( 33,  2,  1);
  printGCD( 45, 18,  9);  
  return 0;
} // main

