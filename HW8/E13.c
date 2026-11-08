// Считать массив из 10 элементов и отобрать в другой массив все числа, у которых вторая с конца цифра (число десятков) – ноль.

#include <stdio.h>
#include <inttypes.h>

#define ARRAY_SIZE 10

void fillArrayInput(int16_t arr[], uint8_t sizeArr)
{
  for (uint8_t i = 0; i < sizeArr; i++)
    scanf("%" SCNd16, &arr[i]);
}

void printArray(int16_t arr[], uint8_t sizeArr)
{
  for (uint8_t i = 0; i < sizeArr; i++)
    printf("%" PRId16 " ", arr[i]);
}

uint8_t getNumIfZero(int16_t arrIn[], int16_t arrOut[], uint8_t sizeArr)
{
  uint8_t j = 0;

  for (uint8_t i = 0; i < sizeArr; i++)
  {
    if(arrIn[i]%100 < 10)
      arrOut[j++] = arrIn[i];
  }  
  return j;
}

int main ()
{
  int16_t arr[ARRAY_SIZE];
  int16_t arrOut[ARRAY_SIZE];

  fillArrayInput(arr, ARRAY_SIZE);
  uint8_t countOfNumbers = getNumIfZero(arr, arrOut, ARRAY_SIZE);  
  printArray(arrOut, countOfNumbers);
  
  return 0;
}
