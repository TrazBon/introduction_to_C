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

int main ()
{
  uint8_t arr[ARRAY_SIZE] = {0}, countOfNum;
  uint32_t n;

  scanf("%" SCNu32, &n);
  countOfNum = convertToArray(arr, n);

  for (uint8_t i = 1; i <= countOfNum; i++)
  {
    printf("%" PRIu8 " ", arr[countOfNum-i]);
  }

  return 0;
}