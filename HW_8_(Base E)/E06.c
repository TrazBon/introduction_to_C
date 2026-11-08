// Считать массив из 12 элементов и посчитать среднее арифметическое элементов массива.

#include <stdio.h>
#include <inttypes.h>

#define ARRAY_SIZE 12

void fillArrayInput(int16_t arr[], uint8_t n)
{
  for (uint8_t i = 0; i < n; i++)
    scanf("%" SCNd16, &arr[i]);
}

int64_t sumOfArray(int16_t arr[], uint8_t n)
{
  int64_t sum = 0;
  for (uint8_t i = 0; i < n; i++)
      sum += arr[i];
      
  return sum;
}

int main ()
{
  int16_t arr[ARRAY_SIZE];
  fillArrayInput(arr, ARRAY_SIZE);
  
  printf("%.2f\n", sumOfArray(arr, ARRAY_SIZE) / (float)ARRAY_SIZE);
  
  return 0;
}