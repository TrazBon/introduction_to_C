// Ввести c клавиатуры массив из 5 элементов, найти среднее арифметическое всех элементов массива.

#include <stdio.h>
#include <inttypes.h>

#define ARRAY_SIZE 5

int main ()
{
  uint16_t n[ARRAY_SIZE ], s = 0;
  
  for (uint8_t i = 0; i < ARRAY_SIZE ; i++)
  {
    scanf("%" SCNu16, &n[i]);
    s += n[i];
  }
  
  printf("%.3f\n", s/(float)ARRAY_SIZE);
  
  return 0;
}