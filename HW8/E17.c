// Дан массив из 10 элементов. В массиве найти элементы, которые в нем встречаются только один раз, и вывести их на экран.

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

void showAloneNumbers(int16_t arr[])
{
  uint8_t arrCountRepeats[ARRAY_SIZE] = {0}; // Array to store repetition counts

  for (uint8_t i = 0; i < ARRAY_SIZE; i++)
  {
    if(arrCountRepeats[i] == 0) //check if that number was counted
    {
      for (uint8_t j = 1+i; j < ARRAY_SIZE; j++)
      {
        if(arr[i] == arr[j])
        {
          arrCountRepeats[i]++;
          arrCountRepeats[j] = 1;
        } 
      }
    }
  }
  
  for (uint8_t i = 0; i < ARRAY_SIZE; i++)
  {
    if(arrCountRepeats[i] == 0) 
      printf("%" PRId16 " ", arr[i]);
  }
}


int main ()
{
  int16_t arr[ARRAY_SIZE];

  fillArrayInput(arr, ARRAY_SIZE);
  
  showAloneNumbers(arr);

  return 0;
}