// Считать массив из 10 элементов и найти в нем максимальный и минимальный элементы и их номера.

#include <stdio.h>
#include <inttypes.h>

#define ARRAY_SIZE 10

int main ()
{
  
  int16_t n[ARRAY_SIZE ];
  uint8_t posMin = 0, posMax = 0;
  
  for (uint8_t i = 0; i < ARRAY_SIZE ; i++)
  {
    scanf("%" SCNd16, &n[i]);
    if(n[i] < n[posMin])
      posMin = i;
    if(n[i] > n[posMax])
      posMax = i;
  }
  
  printf("%" PRId16 " %" PRId16 " %" PRId16 " %" PRId16 "\n", posMax+1, n[posMax], posMin+1, n[posMin]);
  
  return 0;
}