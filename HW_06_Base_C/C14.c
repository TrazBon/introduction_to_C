// Составить функцию логическую функцию, которая определяет, 
// верно ли, что сумма его цифр – четное число. Используя эту функцию решить задачу.

#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>

bool isSumEven(uint64_t n);

int main ()
{
  uint64_t n;
	scanf("%" SCNu64, &n);
  isSumEven(n) ? printf("YES\n") : printf("NO\n"); 

  return 0;
}

bool isSumEven(uint64_t n)
{
  uint16_t sum = 0;
  do
  {
    sum += n % 10;
    n /= 10;
  } while (n>0);

  if ((sum % 2) == 0)
    return 1;

  return 0;
}
  