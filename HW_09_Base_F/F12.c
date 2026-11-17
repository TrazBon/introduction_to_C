// Составить функцию которая меняет в массиве минимальный и максимальный элемент местами.
// Прототип функции void change_max_min(int size, int a[])

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

void change_max_min(int size, int a[])
{
  short minPos = 0;
  for (short i = 1; i < size; i++)
    if (a[i] < a[minPos])
      minPos = i;
  
  short maxPos = 0;
  for (short i = 1; i < size; i++)
    if (a[i] > a[maxPos])
      maxPos = i;
  
  int tmp = a[maxPos];
  a[maxPos] = a[minPos];
  a[minPos] = tmp;
}

int main ()
{
  int arr[SIZE_ARRAY];
  fillArrayInput(arr, SIZE_ARRAY);
  change_max_min(SIZE_ARRAY, arr);
  printArray(arr, SIZE_ARRAY);
  
  return 0;
}