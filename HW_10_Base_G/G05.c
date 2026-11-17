// В файле input.txt дана символьная строка не более 1000 символов. 
// Необходимо заменить все буквы "а" на буквы "b" и наоборот, как заглавные, так и строчные. 
// Результат записать в output.txt.

#include <stdio.h>

#define ARRAY_SIZE 127

int main ()
{
  FILE *fi, *fo;
  signed char c;

  fi = fopen("input.txt", "r");
  fo = fopen("output.txt", "w");

  while ((c = fgetc(fi)) != EOF)
  {
    if(c == 'a' || c == 'A')
      c++;
    else if(c == 'b' || c == 'B')
      c--;

    fputc(c, fo);
  }
  
  fclose(fi);
  fclose(fo);
  return 0;
}