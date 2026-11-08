// Считать массив из 10 элементов и выполнить инверсию отдельно для 1-ой и 2-ой половин массива. 
// Необходимо изменить считанный массив и напечатать его одним циклом.

#include <stdio.h>
#include <inttypes.h>

#define ARRAY_SIZE 10

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
  
  reverseArray(arr, 0, (ARRAY_SIZE/2)-1);
  reverseArray(arr, ARRAY_SIZE/2, ARRAY_SIZE-1);
  
  for (uint8_t i = 0; i < ARRAY_SIZE; i++)
    printf("%" PRId16 " ", arr[i]);

  return 0;
}