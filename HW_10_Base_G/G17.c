// В файле input.txt записаны символы. Необходимо разработать функцию, которая меняет 
// местами пары соседних символов не обращая внимание на символы пробел. 
// Если количество символов нечетно (пробелы не считаем), то последний символ не меняем. 
// Результат записать в файл output.txt.

#include <stdio.h>
#include <stdbool.h>

bool isEndOfData(signed char ch)
{
  if (ch == EOF || ch == '\n' || ch == '\r')
    return true;
  return false;
}

void swapTwo(FILE *fi, FILE *fo)
{
  signed char ch, chLast = 0;
  while (!isEndOfData(ch = fgetc(fi)))
  {
    if(ch != ' ')
    {
      if(chLast)
      {
        fputc(ch, fo);
        fputc(chLast, fo);
        chLast = 0;
      }
      else
      {
        chLast = ch;
      }
    }
    else
    {
      if(chLast != 0){
        short spaces = 1;
        while((ch = fgetc(fi)) == ' ')
          spaces++;
        fputc(ch, fo);
        for (short i = 0; i < spaces; i++)
          fputc(' ', fo);
        fputc(chLast, fo);
        chLast = 0;
      }
      else
      {
        fputc(ch, fo); 
      }
    }
  }
  if(chLast)
    fputc(chLast, fo);
}

int main()
{
  FILE *fi = fopen("input.txt", "r");
  FILE *fo = fopen("output.txt", "w");
  
  swapTwo(fi, fo);

  fclose(fo);
  fclose(fi);

  return 0;
}