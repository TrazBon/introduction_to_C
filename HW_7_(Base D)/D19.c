// Дана строка из английских символов, пробелов и знаков препинания. В конце строки символ точка. 
// Необходимо реализовать рекурсивную функцию, которая считывает данную строку со стандартного 
// потока ввода и возвращает целое число - количество символов 'a' в данной строке.
// int acounter(void) Используя данную функцию решить задачу.

#include <stdio.h>
#include <inttypes.h>

uint16_t acounter(void);

int main ()
{
  printf("%" PRIu16 "\n", acounter());
	
  return 0;
}

uint16_t acounter(void)
{
  char ch = getchar();
  if (ch == '.')
    return 0;
  else if (ch == 'a')
    return 1 + acounter();
  else
    return acounter();
}