// Составить функцию которая возвращает количество элементов на заданном отрезке [from, to] для массива.
// Прототип функции int count_between(int from, int to, int size, int a[])

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

int count_between(int from, int to, int size, int a[])
{
  int count = 0;
  for (int i = 0; i < size; i++)
  {
    if(a[i] >= from && a[i] <= to)
      count++;
  }
  return count;
}

int main ()
{
  int arr[SIZE_ARRAY];
  fillArrayInput(arr, SIZE_ARRAY);
  printf("%d", count_between(4, 6, SIZE_ARRAY, arr));
  
  return 0;
}
// 80 89 77 81 2 88 57 64 49 33 28 58