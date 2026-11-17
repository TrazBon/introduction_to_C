// Дана строка состоящая из маленьких латинских букв 'a'..'z'. 
// В конце строки точка. Необходимо заменить повторяющиеся буквы на <буква><количество повторений>

#include <stdio.h>

void countSymbils(char *s)
{
  char last = *s, count = 1;
  s++;

  while(*s != '\0')
  {
    if(*s != last)
    {
      printf("%c%d", last, count);
      count = 1;
      last = *s;
    }
    else
      count++;

    s++;
  }
}

int main ()
{
  char s[1000];
  scanf("%s[^.]", s);
  countSymbils(s);
  return 0;
}