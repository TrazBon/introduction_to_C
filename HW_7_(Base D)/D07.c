// Составить рекурсивную функцию, печать всех чисел от N до 1.

#include <stdio.h>
#include <inttypes.h>

void printN(uint16_t n);

int main ()
{
  uint16_t n;

  scanf("%" SCNu16, &n);
  printN(n);
  
  return 0;
}

void printN(uint16_t n)
{
  printf("%" PRIu16 " ", n);

  if (n > 1)
    printN(--n);
}