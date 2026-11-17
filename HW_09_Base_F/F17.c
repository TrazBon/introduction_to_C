// Составить функцию которая находит след матрицы в двумерном массиве. Показать пример ее работы на матрице из 5 на 5 элементов. 
// След матрицы - это сумма элементов на главной диагонали.

#include <stdio.h>

#define SIZE_ARRAY 5

void fillTwoDimArrayInput(short n, short m, int arr[n][m])
{
  for (short i = 0; i < n; i++)
    for (short j = 0; j < m; j++)
      scanf("%d", &arr[i][j]);
}

int traceMatrix(int size, int a[size][size])
{
  int sum = 0;
  for (short i = 0; i < size; i++)
    sum += a[i][i];
  return sum;
}

int main ()
{
  int arr[SIZE_ARRAY][SIZE_ARRAY];
  fillTwoDimArrayInput(SIZE_ARRAY,SIZE_ARRAY,arr);
  printf("%d", traceMatrix(SIZE_ARRAY, arr));
  
  return 0;
}