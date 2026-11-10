// Составить функцию которая возвращает сумму элементов в заданном отрезке [from, to] для массива.
// Прототип функции int sum_between_ab(int from, int to, int size, int a[])

#include <stdio.h>

#define SIZE_ARRAY 10

void fillArrayInput(int arr[], short n)
{
  for (short i = 0; i < n; i++)
    scanf("%d", &arr[i]);
}
void printArray(int arr[], short n)
{
  for (short i = 0; i < n; i++)
    printf("%d ", arr[i]);
}

int sum_between_ab(int from, int to, int size, int a[])
{
  int sum = 0, min, max;
  if (from < to)
  {
    min = from;
    max = to;
  }
  else
  {
    min = to;
    max = from;
  }

  for (int i = 0; i < size; i++)
    if(a[i] >= min && a[i] <= max)
      sum += a[i];
  return sum;
}

int main ()
{
  int arr[SIZE_ARRAY];
  fillArrayInput(arr, SIZE_ARRAY);
  printf("%d", sum_between_ab(6, 4, SIZE_ARRAY, arr));
  
  return 0;
}
// 4 6 1 2 3 4 5 6 7 8 9 10