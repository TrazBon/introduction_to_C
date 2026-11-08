// Составить функцию, возведение числа N в степень P. 
// int power(n, p) и привести пример ее использования.

#include <stdio.h>
#include <inttypes.h>

int64_t power(int16_t n, uint8_t p);
int64_t powerWrong(int16_t n, uint8_t p);

int main ()
{
	int16_t n;
  uint8_t p;

	scanf("%" SCNd16 "%" SCNu8, &n, &p);

  printf("%" PRId64 "\n", power(n,p));
	
  return 0;
}

int64_t power(int16_t n, uint8_t p)
{
  if (p == 0) // exception for 0 power
    return 1;
  
  uint64_t result = n;

  for (uint8_t i = 1; i < p; i++)
    result *= n;  
    
  return result;
}