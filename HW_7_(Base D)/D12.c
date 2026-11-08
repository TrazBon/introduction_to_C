// Дана монотонная последовательность, в которой каждое натуральное число k 
// встречается ровно k раз: 1, 2, 2, 3, 3, 3, 4, 4, 4, 4,…
// Выведите первые n членов этой последовательности.

#include <stdio.h>
#include <inttypes.h>

void printSequense(uint16_t n);

int main ()
{
  uint16_t n;

  scanf("%" SCNu16, &n);
  printSequense(n);
  
  return 0;
}

void printSequense(uint16_t n)
{ 
  if (n > 1)
    printSequense(n-1);

  uint16_t count = 0;

  for (uint16_t i = 0; i <= n; i++)
  {
    for (uint16_t j = 1; j <= i; j++)
    {
      count++;
      if (count == n)
        printf("%" PRIu16 " ", i);
    }
  }
}