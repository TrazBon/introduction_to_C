// Составить функцию, которая определяет наибольший общий делитель 
// двух натуральных и привести пример ее использования. int nod(int a, int b)

#include <stdio.h>
#include <inttypes.h>

uint64_t nod(uint64_t a, uint64_t b);

int main ()
{
  uint64_t a,b;

	scanf("%" SCNu64 "%" SCNu64, &a, &b);
  printf("%" PRIu64 "\n", nod(a,b));
  
  return 0;
}

uint64_t nod(uint64_t a, uint64_t b)
{
  if (a > b){  // swap 'a' and 'b' to keep 'a' smaller.
    a ^= b;
    b ^= a;
    a ^= b;
  }

  while (a != 0)
  {
      uint64_t temp = a;
      a = b % a;
      b = temp;
  }
  
  return b;
}