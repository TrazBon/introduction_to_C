// Считать массив из 12 элементов и выполнить циклический сдвиг ВПРАВО на 4 элемента.

#include <stdio.h>
#include <inttypes.h>

#define ARRAY_SIZE 12

void fillArrayInput(int16_t arr[], uint8_t sizeArr)
{
  for (uint8_t i = 0; i < sizeArr; i++)
    scanf("%" SCNd16, &arr[i]);
}

void printArray(int16_t arr[], uint8_t sizeArr)
{
  for (uint8_t i = 0; i < ARRAY_SIZE; i++)
    printf("%" PRId16 " ", arr[i]);
}

void mooveArrayRight(int16_t arr[], uint8_t sizeArr, uint8_t moove)
{
  int16_t arrTmp[moove];

  for (uint8_t i = 0; i < moove; i++)
    arrTmp[i] = arr[sizeArr - i - 1];

  for (uint8_t i = sizeArr - 1; i > moove - 1; i--)
    arr[i] = arr[i - moove];

  for (uint8_t i = 0; i < moove; i++)
    arr[i] = arrTmp[moove - i - 1];
}

int main ()
{
  int16_t arr[ARRAY_SIZE];

  fillArrayInput(arr, ARRAY_SIZE);
  mooveArrayRight(arr, ARRAY_SIZE, 4);  
  printArray(arr, ARRAY_SIZE);
  
  return 0;
}