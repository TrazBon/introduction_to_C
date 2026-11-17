// Дан целочисленный массив из 30 элементов. Элементы массива могут принимать произвольные целые значения 
// помещающиеся в int. Необходимо создать функцию, которая находит и выводит в порядке возрастания номера 
// двух элементов массива, сумма которых минимальна.

#include <stdio.h>

#define SIZE_ARRAY 30

void fillArrayInput(int arr[], short n)
{
  for (short i = 0; i < n; i++)
    scanf("%d", &arr[i]);
}

void searchTwoMin(int arr[], short n)
{
  short minPos = 0;
  for (short i = 1; i < n; i++)
    if (arr[i] < arr[minPos])
      minPos = i;
  
  short minPos2 = (minPos == 0) ? 1 : 0;
  
  for (short i = minPos2 + 1; i < n; i++)
    if (arr[i] < arr[minPos2] && i != minPos)
      minPos2 = i;
  
  (minPos < minPos2) ? printf("%d %d", minPos, minPos2) :  printf("%d %d", minPos2, minPos);
}

int main ()
{
  int arr[SIZE_ARRAY];
  fillArrayInput(arr, SIZE_ARRAY);
  searchTwoMin(arr, SIZE_ARRAY);
  return 0;
}