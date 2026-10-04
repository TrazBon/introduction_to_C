// Написать функцию, которая возвращает среднее арифметическое двух переданных 
// ей аргументов (параметров). int middle(int a, int b)

#include <stdio.h>
#include <inttypes.h>

uint32_t average(uint32_t a, uint32_t b);

int main ()
{
	uint32_t a,b;

	scanf("%" SCNu32 "%" SCNu32, &a, &b);

  printf("%" PRIu32 "\n", average(a,b));
	
  return 0;
}

uint32_t average(uint32_t a, uint32_t b)
{
  return (a + b) / 2;
}