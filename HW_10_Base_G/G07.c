// В файле input.txt считать символьную строку, не более 10 000 символов. 
// Посчитать количество строчных (маленьких) и прописных (больших) букв в введенной строке. 
// Учитывать только английские буквы. Результат записать в файл output.txt.

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef enum
{
  CH_SMALL,
  CH_BIG,
  CH_OTHER
} characterType;

characterType getChType(char ch)
{
  if(ch >= 'a' && ch <= 'z')
    return CH_SMALL;
  else if(ch >= 'A' && ch <= 'Z')
    return CH_BIG;
  else
    return CH_OTHER;
}

int main ()
{
  FILE *fi, *fo;
  signed char c;
  unsigned int small=0, big=0;

  fi = fopen("input.txt", "r");
  fo = fopen("output.txt", "w");
  
  while ((c = fgetc(fi)) != EOF)
  {
    switch (getChType(c))
    {
    case CH_SMALL:
      small++;
      break;
    case CH_BIG:
      big++;
      break;
    case CH_OTHER:
      break;
    }
  }
  
  fprintf(fo, "%d %d", small, big);

  fclose(fi);
  fclose(fo);
  return 0;
}