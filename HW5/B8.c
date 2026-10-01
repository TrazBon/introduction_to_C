#include <stdio.h>
#include <inttypes.h>

int main ()
{
  uint32_t n;
  uint8_t count;

	scanf("%" SCNu32, &n);
	
  while (n>0)
  { 
    if((n%10) == 9)
      count++;
    
    n /= 10; // delete last number
  } 

  (count == 1) ? printf("YES\n") : printf("NO\n");

	return 0;
}