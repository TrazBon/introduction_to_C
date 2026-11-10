// Написать только одну логическую функцию, которая определяет, верно ли, что среди элементов массива есть два одинаковых. 
// Если ответ «да», функция возвращает 1; если ответ «нет», то 0. Строго согласно прототипу:
// int is_two_same(int size, int a[]);

#include <stdio.h>

int is_two_same(int size, int a[])
{
  for (size_t i = 0; i < size; i++)
    for (size_t j = i+1; j < size; j++)
      if(a[i] ==a[j])
        return 1;
  
  return 0;  
}

int main ()
{
  int arr[] = {73, 0, 371, 548, 531, 7};
  printf("%d", is_two_same(6, arr));

  return 0;
}