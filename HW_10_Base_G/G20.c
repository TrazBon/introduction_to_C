// Считать предложение из файла input.txt и определить можно ли из английских букв 
// предложения записанного в файле получить одно слово - палиндром. 
// Ответ напечатать на стандартный поток вывода. Требуется реализовать логическую 
// функцию и применить ее. is_palindrom(string)

#include <stdio.h>
#include <stdbool.h>

#define ARRAY_SIZE 127
#define STRING_SIZE 10000

bool isEndOfData(signed char ch)
{
  if (ch == EOF || ch == '\n' || ch == '\r' || ch == '\0')
    return true;
  return false;
}

bool isLetter(signed char ch)
{
  if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    return true;
  return false;
}

bool isEven(int size, short a[])
{
  for (int i = 0; i < size; i++)
  {
    if((a[i] != 0) && (a[i]%2 == 0))
      return true;
  }
  return false;
}

void delAllEven(int size, short a[])
{
  for (int i = 0; i < size; i++)
    if((a[i] != 0) && (a[i]%2 == 0))
      a[i] -= (a[i] / 2) * 2;
}

int calcOne(int size, short a[])
{
  int count = 0;
  for (int i = 0; i < size; i++)
  {
    if(a[i] == 1)
      count++;
  }
  return count;
}

bool is_palindrom(char str[])
{
  signed char ch;
  short a_table[ARRAY_SIZE] = {0}, i = 0;

  while (!isEndOfData(ch = str[i++]))
  {
    if(isLetter(ch))
      a_table[ch]++;
  }
    
  if(!isEven(ARRAY_SIZE, a_table))
    return false;
  
  delAllEven(ARRAY_SIZE, a_table);
  
  if(calcOne(ARRAY_SIZE, a_table) != 1)
    return false;

  return true;
}

int main()
{
  FILE *fi = fopen("input.txt", "r");
  char strBuffer[STRING_SIZE] = {0};
  
  fgets(strBuffer, sizeof(strBuffer), fi);
  is_palindrom(strBuffer) ? printf("YES\n") : printf("NO\n");
  
  fclose(fi);

  return 0;
}