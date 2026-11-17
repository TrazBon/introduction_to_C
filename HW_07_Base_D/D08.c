// Составить рекурсивную функцию, 
// Выведите все числа от A до B включительно, в порядке возрастания, если A < B,
// или в порядке убывания в противном случае.

#include <stdio.h>
#include <inttypes.h>

void printAB(int16_t a, int16_t b);

int main ()
{
  int16_t a,b;

  scanf("%" SCNd16 "%" SCNd16, &a, &b);
  printAB(a,b);
  
  return 0;
}

void printAB(int16_t a, int16_t b)
{
  printf("%" PRId16 " ", a);
  
  if (a != b)
  {
    (a < b) ? a++ : a--;
    printAB(a,b);
  }
}