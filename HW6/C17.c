// Составить логическую функцию, которая определяет, верно ли, 
// что в заданном числе сумма цифр равна произведению. int is_happy_number(int n)


#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>

bool is_happy_number(uint64_t n);

int main ()
{
  uint64_t n;
	scanf("%" SCNu64, &n);
  is_happy_number(n) ? printf("YES\n") : printf("NO\n"); 

  return 0;
}


bool is_happy_number(uint64_t n)
{    
  uint16_t s=0,m=1;
  do
  {
    s += n % 10;
    m *= n % 10;
    n /= 10;
  } while (n>0);

  if (s == m)
    return true;

  return false;
}
  