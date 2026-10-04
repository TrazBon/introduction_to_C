// Составить функцию, которая определяет сумму всех чисел 
// от 1 до N и привести пример ее использования.

#include <stdio.h>
#include <inttypes.h>

uint32_t sum(uint16_t n);

int main ()
{
	uint16_t n;

	scanf("%" SCNu16, &n);

  printf("%" PRIu32 "\n", sum(n));
	
  return 0;
}

uint32_t sum(uint16_t n)
{
  uint32_t result = 0;

  for (uint16_t i = 1; i <= n; i++)
    result += i;
  
  return result;
}