// Считать массив из 10 элементов и выполнить циклический сдвиг ВПРАВО на 1.

#include <stdio.h>
#include <inttypes.h>

#define ARRAY_SIZE 10

void fillArrayInput(int16_t arr[], uint8_t n)
{
  for (uint8_t i = 0; i < n; i++)
    scanf("%" SCNd16, &arr[i]);
}

void printArray(int16_t arr[], uint8_t n)
{
  for (uint8_t i = 0; i < ARRAY_SIZE; i++)
    printf("%" PRId16 " ", arr[i]);
}

void mooveArrayRight(int16_t arr[], uint8_t n)
{
  int16_t tmp = arr[n-1];
  for (uint8_t i = n-1; i > 0 ; i--)
    arr[i] = arr[i-1];
  arr[0] = tmp;
}

int main ()
{
  int16_t arr[ARRAY_SIZE];

  fillArrayInput(arr, ARRAY_SIZE);
  mooveArrayRight(arr, ARRAY_SIZE);  
  printArray(arr, ARRAY_SIZE);
  
  return 0;
}