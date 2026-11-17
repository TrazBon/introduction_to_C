// Во входном файле input.txt записано некоторое количество символов * (камней). 
// Необходимо построить равносторонний треугольник используя все символы * и символ пробел, 
// записать ответ в выходной файл output.txt. Между соседними символами * строго один пробел.
// Если треугольник невозможно составить, используя все камни, 
// то необходимо записать единственное слово NO в файл output.txt.

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define ARRAY_SIZE 1000

bool isEndOfData(signed char ch)
{
  if (ch == EOF || ch == '\0')
    return true;
  return false;
}

int calcAsterix(FILE *fi)
{
  signed char ch;
  int count = 0;

  while (!isEndOfData(ch = fgetc(fi)))
  {
    if(ch == '*')
      count++;
  }
  return count;
}

bool isPossible(int count)
{
  int x = 1, i = 2;
  while(x < count)
    x += i++;

  if (x == count)
    return true;
  return false;
}

void drawTriangle(int count, FILE *fo)
{
  char list[ARRAY_SIZE][ARRAY_SIZE] = {0};
  int line=0, pos=0;

  while (count > 0)
  {
    while(pos <= line * 2)
    {
      list[line][pos++] = '*';
      list[line][pos++] = ' ';
      count--;
    }
    list[line][pos++] = '\0';
    line++;
    pos = 0;
  }
  
  for (int i = 0; i < line; i++)
  {
    for (int j = 1; j < line - i; j++)
    {
      memmove(list[i] + 1, list[i], strlen(list[i]) + 1);
      list[i][0] = ' ';
    }
  }

  for (int i = 0; i < line; i++)
  {
    fputs(list[i], fo);
    fputc('\n', fo);
  }
}

int main()
{
  FILE *fi = fopen("input.txt", "r");
  FILE *fo = fopen("output.txt", "w");
  
  int countAsterix = calcAsterix(fi);

  if(isPossible(countAsterix))
    drawTriangle(countAsterix, fo);
  else
    fprintf(fo, "NO");
  
  fclose(fi);
  fclose(fo);

  return 0;
}