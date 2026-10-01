#include <stdio.h>
#include <inttypes.h>

int main ()
{
  uint32_t a,b,remainder, max, min;

  scanf("%" SCNd32 "%" SCNd32, &a, &b);

  max = a>b ? a : b;
  min = a>b ? b : a;
  
  while ((max % min) != 0)
  {
    remainder = max % min;
    max = min;
    min = remainder;
  }

  printf("%" PRIu32 "\n", min);

	return 0;
}