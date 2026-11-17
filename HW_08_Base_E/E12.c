// Считать массив из 10 элементов и отсортировать первую половину по возрастанию, а вторую – по убыванию.

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
  for (uint8_t i = 0; i < ARRAY_SIZE; i++)
    printf("%" PRId16 " ", arr[i]);
}

uint8_t swap(int16_t arr[], uint8_t a, uint8_t b)
{
  int16_t tmp = arr[a];
  arr[a] = arr[b];
  arr[b] = tmp;
  return 1;
}

void sortFiftyFifty(int16_t arr[], uint8_t sizeArr)
{
  uint8_t isMooved;

  do{
    isMooved = 0;
    for (uint8_t i = 0; i < sizeArr/2 - 1; i++)
    {
      if(arr[i] > arr[i+1])
        isMooved = swap(arr, i, i+1);
    }  

    for (uint8_t i = sizeArr/2; i < sizeArr - 1; i++)
    {
      if(arr[i] < arr[i+1])
        isMooved = swap(arr, i, i+1);
    }  
  } while (isMooved);
}

int main ()
{
  int16_t arr[ARRAY_SIZE];

  fillArrayInput(arr, ARRAY_SIZE);
  sortFiftyFifty(arr, ARRAY_SIZE);  
  printArray(arr, ARRAY_SIZE);
  
  return 0;
}