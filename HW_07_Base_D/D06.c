// Дана строка заканчивающаяся символом точка '.' Напечатать строку наоборот. 
// Реализуйте рекурсивную функцию, которая считывает и печатает строку наоборот.
// void reverse_string()

#include <stdio.h>

void reverse_string();

int main ()
{
  reverse_string();
	
  return 0;
}

void reverse_string()
{
  char ch = getchar();

  if (ch != '.')
  {
    reverse_string();
    printf("%c", ch);
  }
}