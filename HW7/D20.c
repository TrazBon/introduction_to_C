// Написать рекурсивную функцию возведения целого числа n в степень p.
// int recurs_power(int n, int p)
// Используя данную функцию, решить задачу.

#include <stdio.h>
#include <inttypes.h>

int64_t recurs_power(int16_t n, int16_t p);

int main ()
{
  int16_t n, p;

  scanf("%" SCNd16 "%" SCNd16, &n, &p);
  printf("%" PRId64 "\n", recurs_power(n, p));
	
  return 0;
}

int64_t recurs_power(int16_t n, int16_t p)
{
  if (p == 0)
    return 1;
  else if (p == 1)
    return n;
  else
    return n * recurs_power(n, --p);
}