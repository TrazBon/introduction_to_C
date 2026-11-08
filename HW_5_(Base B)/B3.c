#include <stdio.h>
#include <inttypes.h>

int main ()
{
	uint8_t a,b;
  uint32_t s=0;

	scanf("%" SCNu8 "%" SCNu8, &a, &b);
	
	for (uint8_t i = a; i <= b; i++)
	{
		s += i*i;
	}

  printf("%" PRIu32 "\n", s);
	
	return 0;
}
