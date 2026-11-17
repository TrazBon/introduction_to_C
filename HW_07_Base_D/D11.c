// Дано натуральное число N. Посчитать количество «1» в двоичной записи числа.

#include <stdio.h>
#include <inttypes.h>

uint16_t countBin(uint16_t n);

int main ()
{
  uint16_t n;

  scanf("%" SCNu16, &n);
  printf("%" PRIu16 "\n", countBin(n));
  
  return 0;
}

uint16_t countBin(uint16_t n)
{  
  if (n < 2)
    return n;

  return (n - (n / 2) * 2) + countBin(n / 2);
}