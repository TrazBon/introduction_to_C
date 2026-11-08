#include <stdio.h>
#include <inttypes.h>

int main ()
{
	uint8_t n;

	scanf("%" SCNu8, &n);
	
	for (uint8_t i = 1; i <= n; i++)
	{
		printf("%" PRIu8" %" PRIu8 " %" PRIu8 "\n", i, i*i, i*i*i);
	}
	
	return 0;
}
