// Составить функцию, которая переводит латинскую строчную 
// букву в заглавную. И показать пример ее использования.

#include <stdio.h>
#include <inttypes.h>

char uppercase(char ch);

int main ()
{
	for (char ch = 0; ch != '.';)
  {
    ch = getchar();
    putchar(uppercase(ch));
  }
  
  return 0;
}

char uppercase(char ch)
{
  if ((ch >= 'a') && (ch <= 'z'))
    return ch - 0x20;
  else if (ch == '.')
    return '\n';
  return ch;
}