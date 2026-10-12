// Составить рекурсивную функцию, печать всех простых множителей числа.

#include <stdio.h>
#include <inttypes.h>

void recMultiPrime(uint64_t n);

int main ()
{
  uint64_t n;

  scanf("%" SCNu64, &n);
  recMultiPrime(n);

  return 0;
}

void recMultiPrime(uint64_t n)
{  
  for (uint64_t i = 2; i <= n; i++)
  {
    if(n%i == 0){
      printf("%" PRIu64 " ", i);
      recMultiPrime(n/i);
      break;
    }
  }
}