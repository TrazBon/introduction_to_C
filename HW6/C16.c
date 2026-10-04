// Составить функцию логическую функцию, которая определяет, 
// верно ли, что число простое. Используя функцию решить задачу. int is_prime(int n)


#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>

bool is_prime(uint64_t n);

int main ()
{
  uint64_t n;
	scanf("%" SCNu64, &n);
  is_prime(n) ? printf("YES\n") : printf("NO\n"); 

  return 0;
}


bool is_prime(uint64_t n)
{
  if (n<2)
    return false;
    
  for (uint64_t i = 2; i < n/2; i++)
  {
    if((n % i) == 0)
      return false;
  }

  return true;
}
  