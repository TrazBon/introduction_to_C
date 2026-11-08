// Перевести натуральное число в двоичную систему счисления. Необходимо реализовать рекурсивную функцию.

#include <stdio.h>
#include <inttypes.h>

void decToBin(uint16_t n);

int main ()
{
  uint16_t n;

  scanf("%" SCNu16, &n);
  decToBin(n);
  
  return 0;
}

void decToBin(uint16_t n)
{
  if (n > 1)
    decToBin(n / 2);
  
  printf("%" PRIu16, (n - (n / 2) * 2) );
}