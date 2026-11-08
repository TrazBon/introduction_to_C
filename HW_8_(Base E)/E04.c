// Считать массив из 10 элементов и найти в нем два максимальных элемента и напечатать их сумму.

#include <stdio.h>
#include <inttypes.h>

#define ARRAY_SIZE 10

void fillArrayInput(int16_t arr[], uint8_t n)
{
  for (uint8_t i = 0; i < n; i++)
    scanf("%" SCNd16, &arr[i]);
}

uint8_t getMaxPos(int16_t arr[], uint8_t n)
{
  uint8_t maxPos = 0;
  for (uint8_t i = 0; i < n; i++)
  {
    if (arr[maxPos] < arr[i])
      maxPos = i;
  }
  return maxPos;
}

int main ()
{
  int16_t arr[ARRAY_SIZE];
  int16_t s = 0;
  
  fillArrayInput(arr, ARRAY_SIZE);

  uint8_t maxPos1 = getMaxPos(arr, ARRAY_SIZE);
  s += arr[maxPos1];
  arr[maxPos1] = INT16_MIN;
  
  s += arr[getMaxPos(arr, ARRAY_SIZE)];
  
  printf("%" PRId16 "\n", s);
  
  return 0;
}