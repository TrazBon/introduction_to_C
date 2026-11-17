#include <stdio.h>
#include <inttypes.h>

int main ()
{
  uint32_t n;
  uint8_t max=0,min=9;

	scanf("%" SCNu32, &n);
	
  while (n>0)
  { 
    uint8_t numum = n%10;
    
    if(numum > max)
      max = numum;
    if(numum < min)
      min = numum;
     
    n /= 10; // delete last number
  } 

  printf("%" PRIu8 " %" PRIu8 "\n", min, max);

	return 0;
}