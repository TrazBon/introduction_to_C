// Дан целочисленный массив из 10 элементов. Необходимо определить количество четных и нечетных чисел. 
// Если количество чётных чисел больше, чем количество нечётных, заменить каждое нечетное число на произведение 
// нечетных цифр в его десятичной записи. Если количество нечётных чисел больше или равно количеству чётных, 
// заменить каждое чётное число на произведение чётных цифр в его десятичной записи.

#include <stdio.h>

#define SIZE_ARRAY 10

void fillArrayInput(short n, int arr[])
{
  for (short i = 0; i < n; i++)
    scanf("%d", &arr[i]);
}
void printArray(short n, int arr[])
{
  for (short i = 0; i < n; i++)
    printf("%d ", arr[i]);
}

int calcEven(short n, int arr[])
{
  int count = 0;
  for (short i = 0; i < n; i++)
    if((arr[i] % 2) == 0)
      count++;
  return count;
}

int calcProdEven(int n)
{
  int result = 1;

  while (n > 0)
  {
    int x = n % 10;
    if(x % 2 == 0)
      result *= x;
    n /= 10;
  }

  return result;
}

int calcProdOdd(int n)
{
  int result = 1;

  while (n > 0)
  {
    int x = n % 10;
    if(x % 2 != 0)
      result *= x;
    n /= 10;
  }
  
  return result;
}


void transformOdd(short n, int arr[])
{
  for (short i = 0; i < n; i++)
    if((arr[i] % 2) != 0)
      arr[i] = calcProdOdd(arr[i]);
}

void transformEven(short n, int arr[])
{
  for (short i = 0; i < n; i++)
    if((arr[i] % 2) == 0)
      arr[i] = calcProdEven(arr[i]);
}

int main ()
{
  int arr[SIZE_ARRAY];
  fillArrayInput(SIZE_ARRAY, arr);
  int evens = calcEven(SIZE_ARRAY, arr);

  if (evens > SIZE_ARRAY/2)
    transformOdd(SIZE_ARRAY, arr);
  else
    transformEven(SIZE_ARRAY, arr);

  printArray(SIZE_ARRAY, arr);
  return 0;
}