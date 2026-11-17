// Разработать функцию дана строка из маленьких английских букв. Составить из символов 
// палиндром максимальной длинны. При составлении палиндрома буквы в палиндроме должны 
// быть расположены в лексикографическом порядке. Записать ответ в файл output.txt.

#include <stdio.h>
#include <stdbool.h>

#define ARRAY_SIZE 127

bool isEndOfData(signed char ch)
{
  if (ch == EOF || ch == '\n' || ch == '\r')
    return true;
  return false;
}

char getCharacter(int size, short a[], short n)
{
  if(n == 1)
  {
    for (short i = 0; i < size; i++)
    if(a[i] == n)
    {
      a[i] = 0;
      return i;
    }
  }
  else
  {
    for (short i = 0; i < size; i++)
    if(a[i] >= n)
    {
      a[i] -= n;
      return i;
    }
  }
  return 0;
}

void makePalindrom(FILE *fi, FILE *fo)
{
  signed char ch;
  short a_table[ARRAY_SIZE] = {0}, i = 0, n;
  char s_buffer[1000] = {0};

  while (!isEndOfData(ch = fgetc(fi)))
    a_table[ch]++;
  
  while ((ch = getCharacter(ARRAY_SIZE, a_table, 2)))
    s_buffer[i++] = ch;

  if((ch = getCharacter(ARRAY_SIZE, a_table, 1)))
  {
    s_buffer[i++] = ch;
    n = i - 1;
  }
  else
    n = i;
    
  for (short j = n-1; j >= 0; j--)
    s_buffer[i++] = s_buffer[j];

  s_buffer[i++] = '\0';
  
  fputs(s_buffer, fo);
}

int main()
{
  FILE *fi = fopen("input.txt", "r");
  FILE *fo = fopen("output.txt", "w");
  
  makePalindrom(fi, fo);

  fclose(fo);
  fclose(fi);

  return 0;
}