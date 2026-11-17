#include <stdio.h>
#include <inttypes.h>

int main ()
{
  uint32_t count=0;
  char ch=0,preCh;
  
  do
  {     
    preCh = ch;
    ch = getchar();
    if (ch == ' ')
      count++;
    else if ( (ch == '0') && (preCh == 0) ) // cathing '0' as the first character
      break;       

  } while( !((ch == '0') && (preCh == ' ')) ); // cathing the sequense of ' ' and '0'

  printf("%" PRIu32 "\n", count);

	return 0;
}