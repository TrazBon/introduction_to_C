// В файле input.txt дана строка. Вывести ее в файл output.txt три раза через запятую и показать количество символов в ней.

#include <stdio.h>
#include <string.h>

int main ()
{
  FILE *fi, *fo;
  char str[10000] = {0};
  
  fi = fopen("input.txt", "r");
  fo = fopen("output.txt", "w");
  
  fgets(str, sizeof(str), fi);
  str[strcspn(str,"\r\n")] = '\0';
  fprintf(fo, "%s, %s, %s", str, str, str);  
  fprintf(fo, " %ld", strlen(str));  

  fclose(fi);
  fclose(fo);
  
  return 0;
}