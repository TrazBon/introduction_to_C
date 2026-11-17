// В файле input.txt необходимо удалить все лишние пробелы (в начале предложения и сдвоенные 
// пробелы). Для решения задачи разработать функцию. Результат записать в output.txt.

#include <stdio.h>
#include <stdbool.h>

bool isEndOfData(signed char ch)
{
  if (ch == EOF || ch == '\n' || ch == '\r')
    return true;
  return false;
}

void delSpace(FILE *fi, FILE *fo)
{
  signed char ch, chLast = 0;
  while (!isEndOfData(ch = fgetc(fi)))
  {
    if(ch == ' ')
    {
      while((ch = fgetc(fi)) == ' ');
      
      if(chLast)
        fputc(' ', fo);

      fputc(ch, fo);
    }
    else
    {
      fputc(ch, fo);
      
    }
    chLast = ch;
  }
}

int main()
{
  FILE *fi = fopen("input.txt", "r");
  FILE *fo = fopen("output.txt", "w");
  
  delSpace(fi, fo);

  fclose(fo);
  fclose(fi);

  return 0;
}