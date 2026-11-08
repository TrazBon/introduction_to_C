// Считать массив из 10 элементов и посчитать сумму положительных элементов массива.

#include <stdio.h>
#include <inttypes.h>

#define ARRAY_SIZE 10

void fillArrayInput(int16_t arr[], uint8_t n)
{
  for (uint8_t i = 0; i < n; i++)
    scanf("%" SCNd16, &arr[i]);
}

int32_t sumOfPositiveNumbers(int16_t arr[], uint8_t n)
{
  int32_t sum = 0;
  for (uint8_t i = 0; i < n; i++)
  {
    if (arr[i] > 0)
      sum += arr[i];
  }
  return sum;
}

int main ()
{
  int16_t arr[ARRAY_SIZE];
  fillArrayInput(arr, ARRAY_SIZE);
  
  printf("%" PRId32 "\n", sumOfPositiveNumbers(arr, ARRAY_SIZE));
  
  return 0;
}