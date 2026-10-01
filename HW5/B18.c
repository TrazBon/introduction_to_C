#include <stdio.h>
#include <inttypes.h>

int main ()
{
  uint8_t n;
  uint32_t a[] = {0,0,1};

  scanf("%" SCNu8, &n);

  printf("%" PRIu32 " ", a[2]);

  for (uint8_t i = 1; i < n; i++)
  {
    
    a[0] = a[1];
    a[1] = a[2];
    a[2] = a[0]+a[1];

    printf("%" PRIu32 " ", a[2]);
  }

	return 0;
}