// В файле input.txt даны два слова не более 100 символов каждое, разделенные одним пробелом.
// Найдите только те символы слов, которые встречаются в обоих словах только один раз. 
// Напечатайте их через пробел в файл output.txt в лексикографическом порядке.

#include <stdio.h>

#define ARRAY_SIZE 127

int main ()
{
  FILE *fi, *fo;
  short a_flag[ARRAY_SIZE]={0}, isFirstWord = 1;
  signed char c;

  fi = fopen("input.txt", "r");
  fo = fopen("output.txt", "w");

  while ((c = fgetc(fi)) != EOF)
  {
    if(c == ' ')
      isFirstWord = 0;

    if(isFirstWord)
      a_flag[c] += 10;
    else if(a_flag[c])
      a_flag[c]++;
  }

  for (signed char i = 0; i < ARRAY_SIZE; i++)
  {
    if(a_flag[i] == 11)
      fprintf(fo, "%c ", i);  
  }
  
  fclose(fi);
  fclose(fo);
  return 0;
}