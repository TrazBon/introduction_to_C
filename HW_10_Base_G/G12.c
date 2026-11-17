// В файле input.txt дано предложение требуется разобрать его на отдельные слова.
// Напечатать каждое слово на отдельной строке в файл output.txt.

#include <stdio.h>

int main()
{
  FILE *fi, *fo;
  signed char ch, chLast = 0;

  fi = fopen("input.txt", "r");
  fo = fopen("output.txt", "w");

  while ((ch = fgetc(fi)) != EOF)
  {
    if (ch == ' ' || ch == '\n')
    {
      if (chLast != ' ' && chLast != 0)
        fputc('\n', fo);
    }
    else
      fputc(ch, fo);
    chLast = ch;
  }
  fclose(fi);
  fclose(fo);
  return 0;
}