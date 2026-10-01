#include <stdio.h>
#include <inttypes.h>

int main ()
{
	uint8_t a,b;

	scanf("%" SCNu8 "%" SCNu8, &a, &b);
	
	for (uint8_t i = a; i <= b; i++)
	{
		printf("%" PRIu8 " ", i*i);
	}
	
	return 0;
}
