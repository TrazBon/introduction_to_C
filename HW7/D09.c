// Дано натуральное число N. Вычислите сумму его цифр. Необходимо составить рекурсивную функцию.
// int sum_digits(int n)

#include <stdio.h>
#include <inttypes.h>

uint64_t sum_digits(uint64_t n);

int main ()
{
  uint64_t n;

  scanf("%" SCNu64, &n);
  printf("%" PRIu64 " ", sum_digits(n));
  
  return 0;
}

uint64_t sum_digits(uint64_t n)
{
  if(n / 10 == 0)
    return n;

  return (n % 10) + sum_digits(n / 10);
}
