// Считать массив из 10 элементов и выделить в другой массив все числа, которые встречаются более одного раза. 
// В результирующем массиве эти числа не должны повторяться.

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

uint8_t isNumberInArray(int16_t arr[], uint8_t sizeArr, int16_t num)
{
  for (uint8_t i = 0; i < sizeArr; i++)
  {
    if (arr[i] == num)
      return 1;
  }
  return 0;  
}

uint8_t getRep(int16_t arrIn[], int16_t arrOut[], uint8_t sizeArr)
{
  uint8_t countOfNum = 0;

  for (uint8_t i = 0; i < sizeArr; i++)
  {
    for (uint8_t j = i + 1; j < sizeArr; j++)
    {
      if(arrIn[i] == arrIn[j])
      {
        if(!isNumberInArray(arrOut, countOfNum, arrIn[i]))
        {
          arrOut[countOfNum] = arrIn[i];
          countOfNum++;
        }
      }   
    }
    
  }  
  return countOfNum;
}

int main ()
{
  int16_t arr[ARRAY_SIZE];
  int16_t arrOut[ARRAY_SIZE];

  fillArrayInput(arr, ARRAY_SIZE);
  uint8_t countOfNumbers = getRep(arr, arrOut, ARRAY_SIZE);  
  printArray(arrOut, countOfNumbers);
  
  return 0;
}
