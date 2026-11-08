// Считать массив из 12 элементов и выполнить инверсию для каждой трети массива.

#include <stdio.h>
#include <inttypes.h>

#define ARRAY_SIZE 12

void fillArrayInput(int16_t arr[], uint8_t n)
{
  for (uint8_t i = 0; i < n; i++)
    scanf("%" SCNd16, &arr[i]);
}

void reverseArray(int16_t arr[], uint8_t startPos, uint8_t endPos)
{
  for (uint8_t i = startPos; i <= (startPos + (endPos + 1 - startPos)/2 - 1) ; i++)
  {
    int16_t tmp = arr[i];
    arr[i] = arr[endPos-i+startPos];
    arr[endPos-i+startPos] = tmp;
  }
}

int main ()
{
  int16_t arr[ARRAY_SIZE];
  fillArrayInput(arr, ARRAY_SIZE);
  
  reverseArray(arr, 0, (ARRAY_SIZE/3)-1);
  reverseArray(arr, ARRAY_SIZE/3, ARRAY_SIZE*2/3-1);
  reverseArray(arr, ARRAY_SIZE*2/3, ARRAY_SIZE-1);

  for (uint8_t i = 0; i < ARRAY_SIZE; i++)
    printf("%" PRId16 " ", arr[i]);

  return 0;
}
// 1 2 3 4 5 6 7 8 9 10 11 12