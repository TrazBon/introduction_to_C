// Дано целое не отрицательное число N. Выведите все его цифры по одной, 
// в обратном порядке, разделяя их пробелами или новыми строками.

#include <stdio.h>
#include <inttypes.h>

void recSeparate(uint16_t n);

int main ()
{
  uint16_t n;

  scanf("%" SCNu16, &n);
  recSeparate(n);
  
  return 0;
}

void recSeparate(uint16_t n)
{
  printf("%" PRIu16 " ", n%10);
  if (n/10 != 0)
    recSeparate(n/10);
}