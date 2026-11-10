// Написать только одну функцию, которая ставит в начало массива все четные элементы, а в конец – все нечетные. 
// Не нарушайте порядок следования чисел между собой. Строго согласно прототипу:.
// void sort_even_odd(int n, int a[])

/*
#include <stdio.h>

#define ARRAY_SIZE 5

void fillArrayInput(short sizeArr, int arr[])
{
  for (short i = 0; i < sizeArr; i++)
    scanf("%d", &arr[i]);
}

void printArray(short sizeArr, int arr[])
{
  for (short i = 0; i < sizeArr; i++)
    printf("%d ", arr[i]);
}
*/

void sort_even_odd(int n, int a[])
{
  int arrOut[n];

  short j = 0;
  for (short i = 0; i < n; i++)
    if(a[i]%2 == 0)
      arrOut[j++] = a[i];

  for (short i = 0; i < n; i++)
    if(a[i]%2 != 0)
      arrOut[j++] = a[i];

  for (short i = 0; i < n; i++)
    a[i] = arrOut[i];
}

/*
int main ()
{
  int a[ARRAY_SIZE ];
  fillArrayInput(ARRAY_SIZE, a);
  sort_even_odd(ARRAY_SIZE, a);
  printArray(ARRAY_SIZE, a);  
  return 0;
}
  */