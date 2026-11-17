// В файле input.txt дана строка слов, разделенных пробелами. 
// Найти самое длинное слово и вывести его в файл output.txt. 
// Случай, когда самых длинных слов может быть несколько, не обрабатывать.

#include <stdio.h>

int main ()
{
  FILE *fi, *fo;
  signed char ch;

  fi = fopen("input.txt", "r");
  fo = fopen("output.txt", "w");
  
  long startPos = ftell(fi), lastSpace = 0, endPos = 0;
  while((ch = fgetc(fi)) != EOF)
  {
    if(ch == ' ')
    {
      if((ftell(fi) - lastSpace) > (endPos - startPos))
      {
        startPos = lastSpace;
        endPos = ftell(fi)-1;
      }
      lastSpace = ftell(fi);
    }
  }
  if(endPos == 0)
    endPos = ftell(fi);

  fseek(fi, startPos, SEEK_SET);
  while (ftell(fi) < endPos)
    fputc(fgetc(fi), fo);
  
  fclose(fi);
  fclose(fo);
  return 0;
}