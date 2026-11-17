// В файле input.txt строка из меленьких и больших английских букв, знаков препинания
// и пробелов. Требуется удалить из нее повторяющиеся символы и все пробелы. 
// Результат записать в файл output.txt.

#include <stdio.h>
#include <stdbool.h>

#define ARRAY_SIZE 1000

int main ()
{
  FILE *fi, *fo;
  bool a_flag[127] = {false};
  signed char ch;

  fi = fopen("input.txt", "r");
  fo = fopen("output.txt", "w");
  
  while((ch = fgetc(fi)) != EOF)
  {
    if(!a_flag[ch] && ch != ' ')
    {
      fputc(ch, fo);
      a_flag[ch] = true;
    }
  }  

  fclose(fi);
  fclose(fo);
  return 0;
}