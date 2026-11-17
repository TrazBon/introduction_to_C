// В файле input.txt символьная строка не более 1000 символов. Необходимо проверить, 
// является ли она палиндромом (палиндром читается одинаково в обоих направлениях). 
// Реализовать логическую функцию is_palindrom(str) и записать ответ в файл output.txt.

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define ARRAY_SIZE 1000

bool is_palindrom(char str[])
{
  for (int i = 0; i < strlen(str)/2; i++)
  {
    if(str[i] != str[strlen(str) - 2 - i])
      return false;
  }
  return true;
}

int main ()
{
  FILE *fi, *fo;
  char str[ARRAY_SIZE];

  fi = fopen("input.txt", "r");
  fo = fopen("output.txt", "w");

  fgets(str, sizeof(str), fi);
  is_palindrom(str) ? fputs("YES", fo) : fputs("NO", fo);

  fclose(fi);
  fclose(fo);
  return 0;
}