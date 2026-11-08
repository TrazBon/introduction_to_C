#include <stdio.h>
#include <inttypes.h>

int main ()
{
  uint32_t n,s=0;

	scanf("%" SCNu32, &n);
	
  while (n>0)
  {
    s += n%10;
    n = n/10;
  }

  printf("%" PRIu32 "\n", s);

	return 0;
}
