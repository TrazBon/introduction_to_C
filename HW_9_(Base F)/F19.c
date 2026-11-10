// Определить количество положительных элементов квадратной матрицы, превышающих по величине среднее 
// арифметическое всех элементов главной диагонали. Реализовать функцию среднее арифметическое главной диагонали.

#include <stdio.h>

#define SIZE_ARRAY 5

void fillTwoDimArrayInput(short n, short m, int arr[n][m])
{
  for (short i = 0; i < n; i++)
    for (short j = 0; j < m; j++)
      scanf("%d", &arr[i][j]);
}

int calcMeanMainDiag(int size, int a[size][size])
{
  int sum = 0;
  for (short i = 0; i < size; i++)
    sum += a[i][i];
  return sum/size;
}

int countMoreThan(short size, int arr[size][size], int num)
{
  short count = 0;
  for (short i = 0; i < size; i++)
    for (short j = 0; j < size; j++)
      if (arr[i][j] > num)
        count++;
  
  return count;
}

int main ()
{
  int arr[SIZE_ARRAY][SIZE_ARRAY];
  fillTwoDimArrayInput(SIZE_ARRAY,SIZE_ARRAY,arr);
  int meanMainDiag = calcMeanMainDiag(SIZE_ARRAY, arr);
  printf("%d\n", countMoreThan(SIZE_ARRAY, arr, meanMainDiag));
  
  return 0;
}