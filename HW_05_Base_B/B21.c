#include <stdio.h>
#include <inttypes.h>

int main ()
{
  char ch;

  while(1)
  { 
    ch = getchar();    
    
    if(ch == '.')
      break;

    if ((ch >= 'A') && (ch <= 'Z'))
      ch += 0x20;
    
    putchar(ch);
  }

	return 0;
}