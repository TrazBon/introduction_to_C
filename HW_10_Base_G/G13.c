// В файле input.txt записан полный адрес файла (возможно, без расширения).
// Необходимо изменить его расширение на ".html" и записать результат в файл output.txt.

#include <stdio.h>
#include <stdbool.h>

bool isEndOfData(signed char ch)
{
  if (ch == EOF || ch == '\n' || ch == '\r')
    return true;
  return false;
}

int main()
{
  FILE *fi, *fo;
  signed char ch, posDot = 0, posSlash = 0;

  fi = fopen("input.txt", "r");
  fo = fopen("output.txt", "w");

  while (!isEndOfData(ch = fgetc(fi)))
  {
    if (ch == '.')
      posDot = ftell(fi) - 1;
    else if (ch == '/')
      posSlash = ftell(fi);
  }

  if ((posDot < posSlash) || (posDot == 0))
    posDot = ftell(fi) - 1;

  fseek(fi, 0, SEEK_SET);
  while (ftell(fi) != posDot)
    fputc(fgetc(fi), fo);

  fprintf(fo, ".html");

  fclose(fi);
  fclose(fo);
  return 0;
}