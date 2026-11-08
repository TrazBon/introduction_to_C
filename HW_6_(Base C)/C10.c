// Составить функцию, печать всех простых множителей числа. 
// Использовать ее для печати всех простых множителей числа. void print_simple(int n)

#include <stdio.h>
#include <inttypes.h>

void print_simple(uint16_t n);

int main ()
{
  uint16_t n;

	scanf("%" SCNu16, &n);
  print_simple(n);
  
  return 0;
}

void print_simple(uint16_t n)
{
  uint16_t i = 1;
  do
  { 
    if((n % ++i) == 0)
    {
      printf("%" PRIu16 " ", i);
      n /= i; 
      i = 1;
    }

  } while(n != 1);
  
}