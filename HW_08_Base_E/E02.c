// Ввести c клавиатуры массив из 5 элементов, найти минимальный из них.

#include <stdio.h>
#include <inttypes.h>

#define ARRAY_SIZE 5

int main ()
{
  int16_t n[ARRAY_SIZE ], min = INT16_MAX;
  
  for (uint8_t i = 0; i < ARRAY_SIZE ; i++)
  {
    scanf("%" SCNd16, &n[i]);
    min = (n[i] < min) ? n[i] : min;
  }
  
  printf("%" PRId16 "\n", min);
  
  return 0;
}