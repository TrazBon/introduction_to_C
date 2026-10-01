#include <stdio.h>
#include <inttypes.h>

int main ()
{
  uint32_t num=0, count=0;
  char ch=0,preCh;
  
  do
  {     
    preCh = ch;
    ch = getchar();
    
    if ( ((ch == '0') || (ch == ' ') || (ch == '\n')) && (preCh == 0) ) // cathing empty as the first character
      break;
    else if ((ch >= '0') && (ch<='9')) // catching numbers
      num = (num*10) + (ch-'0');
    else if (ch == ' ') //catching space separator
    {
      ((num % 2) == 0) ? count++ : 0;
      num = 0;
    }
    
  } while( !((ch == '0') && (preCh == ' ')) ); // cathing the sequense of ' ' and '0'

  printf("%" PRIu32 "\n", count);

	return 0;
}