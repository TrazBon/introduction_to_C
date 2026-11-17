// В файле input.txt в одной строке фамилию, имя и отчество. Сформировать файл приветствие 
// output.txt, где останутся имя и фамилия

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct Person
{
  char firstName[1000];
  char lastName[1000];
};

bool isEndOfData(signed char ch)
{
  if (ch == EOF || ch == '\n' || ch == '\r')
    return true;
  return false;
}

struct Person getPerson(FILE *fi)
{
  signed char ch;
  short nameType = 0, i = 0;
  struct Person p = {0};

  while (!isEndOfData(ch = fgetc(fi)))
  {
    if(ch == ' ')
      ch = '\0';

    switch (nameType)
    {
      case 0:
        p.lastName[i++] = ch; 
        break;
      case 1:
        p.firstName[i++] = ch; 
        break;
    }

    if(ch == '\0')
    {
      nameType++;
      i = 0;
    }
  }

  fclose(fi);
  return p;
}

int main()
{
  FILE *fo = fopen("output.txt", "w");
  struct Person p = getPerson(fopen("input.txt", "r"));
  fprintf(fo, "Hello, %s %s!", p.firstName, p.lastName);
  fclose(fo);

  return 0;
}