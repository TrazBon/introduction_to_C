// Считать 10 чисел в диапазоне от -500 до 500 и разложить по двум массивам: в одни помещать только положительные, 
// во второй - только отрицательные. Числа, равные нулю, игнорировать. Вывести на экран все элементы обоих массивов.

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

uint8_t getPos(int16_t arrIn[], int16_t arrOut[], uint8_t sizeArr)
{
  uint8_t countOfNum = 0;
  for (uint8_t i = 0; i < sizeArr; i++)
  {
    if(arrIn[i] > 0)
      arrOut[countOfNum++] = arrIn[i];
  }
  return countOfNum;
}

uint8_t getNeg(int16_t arrIn[], int16_t arrOut[], uint8_t sizeArr)
{
  uint8_t countOfNum = 0;
  for (uint8_t i = 0; i < sizeArr; i++)
  {
    if(arrIn[i] < 0)
      arrOut[countOfNum++] = arrIn[i];;
  }
  return countOfNum;
}

int main ()
{
  int16_t arr[ARRAY_SIZE];
  int16_t arrPos[ARRAY_SIZE];
  int16_t arrNeg[ARRAY_SIZE];

  fillArrayInput(arr, ARRAY_SIZE);
  
  uint8_t countOfPosNum = getPos(arr, arrPos, ARRAY_SIZE);  
  uint8_t countOfNegNum = getNeg(arr, arrNeg, ARRAY_SIZE);  

  printArray(arrPos, countOfPosNum);
  printArray(arrNeg, countOfNegNum);
  
  return 0;
}
