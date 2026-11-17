// Составить функцию которая определяет в массиве, состоящем из положительных и отрицательных чисел, 
// сколько элементов превосходят по модулю максимальный элемент.
// Прототип функции int count_bigger_abs(int n, int a[]);

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

int count_bigger_abs(int n, int a[])
{
  int max = a[0], count = 0;
  for (short i = 1; i < n; i++)
    if (a[i] > max)
      max = a[i];
  
  for (short i = 0; i < n; i++)
    if (a[i] * -1 > max)
      count++;
  
  return count;
}

int main ()
{
  int arr[SIZE_ARRAY];
  fillArrayInput(arr, SIZE_ARRAY);
  printf("%d\n", count_bigger_abs(SIZE_ARRAY, arr));
  
  return 0;
}
// -47 19 8 -41 24 22 44 23 28 -29