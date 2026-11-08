// Составить рекурсивную функцию, которая определяет сумму всех чисел от 1 до N

#include <stdio.h>
#include <inttypes.h>

uint64_t recSum(uint16_t n);

int main ()
{
  uint16_t n;

  scanf("%" SCNu16, &n);
  printf("%" PRIu64 " ", recSum(n));
  
  return 0;
}

uint64_t recSum(uint16_t n)
{
  if(n == 1)
    return 1;

  return n + recSum(n-1);
}
