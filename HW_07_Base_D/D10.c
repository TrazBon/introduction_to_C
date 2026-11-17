// Дано натуральное число n ≥ 1. Проверьте, является ли оно простым. 
// Программа должна вывести слово YES, если число простое или NO в противном случае. 
// Необходимо составить рекурсивную функцию и использовать ее. int is_prime(int n, int delitel)

#include <stdio.h>
#include <inttypes.h>

uint8_t is_prime(uint32_t n, uint32_t delitel);

int main ()
{
  uint64_t n;

  scanf("%" SCNu64, &n);
  is_prime(n,2) ? printf("YES\n") : printf("NO\n");
  
  return 0;
}

uint8_t is_prime(uint32_t n, uint32_t delitel)
{
  if (n < 2)
    return 0;
  else if (delitel >= n)
    return 1;
  else if (n % delitel == 0)
    return 0;
  else
    return is_prime(n, ++delitel);
}
