#include <stdio.h>
#include <inttypes.h>

int main ()
{
  uint32_t n;
  uint8_t countEven=0,countOdd=0;

	scanf("%" SCNu32, &n);
	
  while (n>0)
  {     
    ((n%10)%2) == 0 ? countEven++ : countOdd++;
    n /= 10; // delete last number
  } 

  printf("%" PRIu8 " %" PRIu8 "\n", countEven, countOdd);

	return 0;
}