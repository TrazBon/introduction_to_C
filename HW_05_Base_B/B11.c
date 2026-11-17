#include <stdio.h>
#include <inttypes.h>

int main ()
{
  uint32_t n,reverseN=0;

	scanf("%" SCNu32, &n);
	
  while (n>0)
  { 
    reverseN = reverseN * 10 + n%10;
    n /= 10; // delete last number
  } 

  printf("%" PRIu32 "\n", reverseN);

	return 0;
}