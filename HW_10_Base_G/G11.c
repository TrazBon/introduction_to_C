// В файле input.txt дано предложение. Необходимо определить, сколько слов 
// заканчиваются на букву 'а'. Ответ записать в файл output.txt.

#include <stdio.h>

int main ()
{
  FILE *fi, *fo;
  signed char ch, lastCh = 0, count = 0;

  fi = fopen("input.txt", "r");
  fo = fopen("output.txt", "w");
  
  do
  {
    ch = fgetc(fi);
    if((ch == ' ' || ch == EOF || ch == '\n') && (lastCh == 'a' || lastCh == 'A'))
      count++;
    lastCh = ch;
  }while (ch != EOF);
  {
    /* code */
  }
  
  fprintf(fo, "%d", count);
  
  fclose(fi);
  fclose(fo);
  return 0;
}