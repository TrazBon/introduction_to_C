#include <stdio.h>
#include <inttypes.h>

int main ()
{
  uint32_t n;

	scanf("%" SCNu32, &n);
	
	if (n>99 && n < 1000)
    printf("YES\n");
	else
    printf("NO\n");

	return 0;
}
