// Дана целочисленная квадратная матрица 10 х 10. реализовать алгоритм вычисления суммы максимальных 
// элементов из каждой строки. Напечатать значение этой суммы. Предполагается, что в каждой 
// строке такой элемент единственный. Реализовать функцию поиска максимума в строке из 10 элементов

#include <stdio.h>

#define SIZE_ARRAY 10

void fillTwoDimArrayInput(short n, short m, int arr[n][m])
{
  for (short i = 0; i < n; i++)
    for (short j = 0; j < m; j++)
      scanf("%d", &arr[i][j]);
}

int getMaxSum(short n, int arr[n][n])
{
  int max = 0;
  for (short i = 0; i < n; i++)
  {
    int maxLine = arr[i][0];
    
    for (short j = 1; j < n; j++)
      if (maxLine < arr[i][j])
        maxLine = arr[i][j];
    
    max += maxLine;
  } 
  return max;
}

int main ()
{
  int arr[SIZE_ARRAY][SIZE_ARRAY];
  fillTwoDimArrayInput(SIZE_ARRAY,SIZE_ARRAY,arr);
  printf("%d\n", getMaxSum(SIZE_ARRAY, arr));
  
  return 0;
}