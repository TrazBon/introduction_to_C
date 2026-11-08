// Дан массив из 10 элементов. Определить, какое число в массиве встречается чаще всего. Гарантируется, что такое число ровно 1.

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

int16_t getPosMax(uint8_t arr[], uint8_t sizeArr)
{
  uint8_t maxPos = 0;
  for (uint8_t i = 1; i < sizeArr; i++)
  {
    if(arr[i] > arr[maxPos])
      maxPos = i;
  }
  return maxPos;
}

int16_t getRepeatingNumber(int16_t arr[])
{
  uint8_t arrCountRepeats[ARRAY_SIZE] = {0}; // Array to store repetition counts

  for (uint8_t i = 0; i < ARRAY_SIZE; i++)
  {
    if(arrCountRepeats[i] == 0) //check if that number was counted
    {
      for (uint8_t j = 0+i; j < ARRAY_SIZE; j++)
      {
        if(arr[i] == arr[j])
        {
          arrCountRepeats[i]++;
          arrCountRepeats[j] = 1;
        } 
      }
    }
  }
  uint8_t maxPos = getPosMax(arrCountRepeats, ARRAY_SIZE);
  return arr[maxPos];
}


int main ()
{
  int16_t arr[ARRAY_SIZE];

  fillArrayInput(arr, ARRAY_SIZE);
  
  printf("%" PRId16 "\n", getRepeatingNumber(arr));
  
  return 0;
}