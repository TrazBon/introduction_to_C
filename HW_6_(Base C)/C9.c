// Составить функцию вычисления N!. 
// Использовать ее при вычислении факториала int factorial(int n)

#include <stdio.h>
#include <inttypes.h>

uint64_t factorial(uint16_t n);

int main ()
{
  uint16_t n;

	scanf("%" SCNu16, &n);
  printf("%" PRIu64 "\n", factorial(n));
  
  return 0;
}

uint64_t factorial(uint16_t n)
{
  uint64_t f=1;

  for (uint16_t i = 1; i <= n; i++)
    f *= i; 
  
  return f;
}