// Составить только функцию которая в массиве находит максимальный из отрицательных элементов и меняет его местами с
// последним элементом массива. Гарантируется, что в массиве только один такой элемент или же такой элемент отсутствует. 
// Если отрицательных элементов нет - массив не менять. Прототип функции: void swap_negmax_last(int size, int a[])

#include <stdio.h>

void swap_negmax_last(int size, int a[])
{
  int max = -1*__INT16_MAX__;
  int *adrMax = &max, *pArr = a, *adrEndArr = a + size-1;

  while (pArr < adrEndArr)
  {
    if(*pArr < 0)
    {
      if(*pArr > *adrMax)
      {
        adrMax = pArr;
      }
    }
    pArr++;
  }

  if(adrMax != &max)
  {
    int tmp = *adrEndArr;
    *adrEndArr = *adrMax;
    *adrMax = tmp;
  }
}

void printArray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);
}

int main ()
{
  int a[] = {1, -2, -3, -4, 5, 6, 7, 8, 9, 10};
  // int a[] = {50, 90, 51, 90, 54, 50, 18, 84, 16, 3};
  swap_negmax_last(10, a);
  printArray(a,10);
  return 0;
}