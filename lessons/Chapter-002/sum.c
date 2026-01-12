/* Objective: Write a C program that calculates the sum of an integer, a float, and a double, then prints the result. */

#include <stdio.h>

int main() {
  int a = 3;
  float b = 4.5;
  double c = 5.25;
  float sum;

  /* We added this line to calculate the sum of a, b, and c */
  sum = a + b + c;

  printf("The sum of a, b, and c is %f.", sum);
  return 0;
}