// В файле input.txt дана строка, не более 1000 символов, содержащая буквы, целые числа и иные символы. 
// Требуется все числа, которые встречаются в строке, поместить в отдельный целочисленный массив. 
// Например, если дана строка "data 48 call 9 read13 blank0a", то в массиве числа 48, 9, 13 и 0. 
// Вывести массив по возрастанию в файл output.txt.

#include <stdio.h>
#include <stdbool.h>

#define ARRAY_SIZE 1000

bool isNum(char ch)
{
  if(ch >= '0' && ch <= '9')
    return true;
  return false;
}

void sort_array(int size, int a[])
{
  short isMooved;
  do{
    isMooved = 0;
    for (short i = 0; i < size - 1; i++)
    {
      if(a[i] > a[i+1])
      {
        int tmp = a[i];
        a[i] = a[i+1];
        a[i+1] = tmp;
        isMooved = 1;
      }
    }  
  } while (isMooved);
}

int main ()
{
  FILE *fi, *fo;
  signed char ch=0, chLast=0;
  short sign = 1, i=0;
  int n = 0, a_int[ARRAY_SIZE] = {0};

  fi = fopen("input.txt", "r");
  fo = fopen("output.txt", "w");
  
  do
  {
    ch = fgetc(fi);
    if (isNum(ch))
    {
      if(isNum(chLast))
        n = (n * 10) + (ch - '0');
      else
        n = (chLast == '-') ? (ch - '0') * -1 : ch - '0';
    } 
    else
    {
      if(isNum(chLast))
      {
        a_int[i++] = n;
      }
    }
    chLast = ch;
  }while (ch != EOF);

  sort_array(i, a_int);
  for (short j = 0; j < i; j++)
    fprintf(fo, "%d ", a_int[j]);

  fclose(fi);
  fclose(fo);
  return 0;
}