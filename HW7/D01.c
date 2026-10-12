// Составить рекурсивную функцию, печать всех чисел от 1 до N

#include <stdio.h>
#include <inttypes.h>

uint16_t recPrint(uint16_t n);

int main ()
{
  uint16_t n;

  scanf("%" SCNu16, &n);
  recPrint(n);
  
  return 0;
}

uint16_t recPrint(uint16_t n)
{
  if(n > 1)
    recPrint(n-1);

  printf("%" PRIu16 " ", n);
}
