// Написать только одну функцию, которая находит максимальный элемент в массиве. Всю программу загружать не надо.
// Прототип функции: int find_max_array(int size, int a[])

#include <stdio.h>

int find_max_array(int size, int a[])
{
  int max = a[0];
  for (size_t i = 1; i < size; i++)
    if(max < a[i])
      max = a[i];
  return max;  
}

int main ()
{
  int arr[] = {73, 307, 371, 548, 531, 765};
  printf("%d", find_max_array(6, arr));

  return 0;
}