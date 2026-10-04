// Задача про шашматную доску и зерна

#include <stdio.h>
#include <inttypes.h>

uint64_t checkmate(uint16_t n);

int main ()
{
	uint16_t n;

	scanf("%" SCNu16, &n);

  printf("%" PRIu64 "\n", checkmate(n));
	
  return 0;
}

uint64_t checkmate(uint16_t n)
{
  uint64_t result = 1;

  for (uint16_t i = 2; i <= n; i++)
    result = result*2;
  
  return result;
}