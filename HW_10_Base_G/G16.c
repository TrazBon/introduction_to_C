// В файле input.txt дано предложение. Необходимо заменить все имена «Ling» на «Cao» и 
// результат записать в файл output.txt.

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define STRING_SIZE 10000

int calcDifference(int a, int b)
{
  return a > b ? a - b : b - a;
}

void replaseInString(char str[], char old[], char new[])
{
  char *pos;
  while((pos = strstr(str, old)) != 0)
  {
    memmove(
      pos + strlen(old) - (strlen(old) - strlen(new) + 1), 
      pos + strlen(old) - calcDifference(strlen(new),strlen(old)), 
      strlen(str) - (str - pos));
    memmove(pos, new, strlen(new));
  }
}

int main()
{
  FILE *fi = fopen("input.txt", "r");
  FILE *fo = fopen("output.txt", "w");
  char strBuffer[STRING_SIZE] = {0};
  
  fgets(strBuffer, sizeof(strBuffer), fi);
  replaseInString(strBuffer, "Ling", "Cao");
  fputs(strBuffer, fo);

  fclose(fo);
  fclose(fi);

  return 0;
}