// Soundex

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isEndOfData(signed char ch)
{
  if (ch == EOF || ch == '\n' || ch == '\r' || ch == '\0')
    return true;
  return false;
}

short getSymbolType(signed char ch)
{
  switch (ch)
  {
    case 'b':
    case 'f':
    case 'p':
    case 'v':
      return 1;
    case 'c':
    case 'g':
    case 'J':
    case 'k':
    case 'q':
    case 's':
    case 'x':
    case 'z':
      return 2;
    case 'd':
    case 't':
      return 3;
    case 'l':
      return 4;
    case 'm':
    case 'n':
      return 5;
    case 'r':
      return 6;
    default:
      return 0;
  }
}

void calcSoundexCode(FILE *fi, FILE *fo)
{
  signed char ch;
  short n, nLast = 0, lenght = 1;
  fputc(fgetc(fi), fo);

  while(!(isEndOfData(ch = fgetc(fi)) || (lenght >= 4)))
  {
    n = getSymbolType(ch);
    if((n != 0) && (n != nLast))
    {
      fputc(n+'0', fo);
      nLast = n;
      lenght++;
    }
  }
  for (short i = lenght; i < 4; i++)
  {
    fputc('0', fo);
  }
  
}

int main()
{
  FILE *fi = fopen("input.txt", "r");
  FILE *fo = fopen("output.txt", "w");
  
  calcSoundexCode(fi, fo);
  
  fclose(fi);
  fclose(fo);

  return 0;
}