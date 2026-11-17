// Составить функцию, модуль числа и привести пример ее использования.

#include <stdio.h>
#include <inttypes.h>

uint32_t getModule(int32_t x);

int main ()
{
	int32_t n;

	scanf("%" SCNd32, &n);
	
  printf("%" PRIu32 "\n", getModule(n));
	
  return 0;
}

uint32_t getModule(int32_t x)
{
  return (x < 0) ? x * -1 : x;
}