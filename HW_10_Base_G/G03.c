// В файле input.txt дана строка из не более 1000 символов. Показать номера символов, 
// совпадающих с последним символом строки. Результат записать в файл output.txt

#include <stdio.h>

int main ()
{
  FILE *fi, *fo;
  signed char c, c_End;
  unsigned int i = 0;

  fi = fopen("input.txt", "r");
  fo = fopen("output.txt", "w");
  
  fseek(fi, -1, SEEK_END);
  long endPos = ftell(fi);
  c_End = fgetc(fi);

  fseek(fi, 0, SEEK_SET);
  while (ftell(fi) < endPos)
  {
    if(fgetc(fi) == c_End)
      fprintf(fo, "%d ", i);  
    i++;
  }

  fclose(fi);
  fclose(fo);
  return 0;
}