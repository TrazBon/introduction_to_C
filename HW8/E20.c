// Вывести в порядке следования цифры, входящие в десятичную запись натурального числа N.

#include <stdio.h>
#include <inttypes.h>

#define ARRAY_SIZE 20

uint8_t convertToArray(uint8_t arr[], uint32_t n)
{
  uint8_t i;
  for (i = 0; n > 0; i++)
  {
    arr[i] = n % 10;
    n /= 10;
  } 

  return i;
}

uint8_t swap(uint8_t arr[], uint8_t a, uint8_t b)
{
  int16_t tmp = arr[a];
  arr[a] = arr[b];
  arr[b] = tmp;
  return 1;
}

void sortArray(uint8_t arr[], uint8_t sizeArr)
{
  uint8_t isMooved;

  do{
    isMooved = 0;
    for (uint8_t i = 0; i < sizeArr - 1; i++)
    {
      if(arr[i] < arr[i+1])
      {
        isMooved = swap(arr, i, i+1);
      }
    }  
  } while (isMooved);
}

int main ()
{
  uint8_t arr[ARRAY_SIZE] = {0}, countOfNum;
  uint32_t n;

  scanf("%" SCNu32, &n);
  countOfNum = convertToArray(arr, n);
  sortArray(arr, countOfNum);



  for (uint8_t i = 0; i < countOfNum; i++)
  {
    printf("%" PRIu8, arr[i]);
  }

  return 0;
}