// Написать логическую рекурсивную функцию и используя ее определить 
// является ли введенное натуральное число точной степенью двойки. int is2pow(int n)

#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>

bool is2pow(int16_t n);

int main ()
{
  uint16_t n;

  scanf("%" SCNu16, &n);
  is2pow(n) ? printf("YES\n") : printf("NO\n");
  
  return 0;
}

bool is2pow(int16_t n)
{
  if(n <= 2)
    return true;
  else if(n%2 == 0)
    return is2pow(n/2);
  else
    return false;
}