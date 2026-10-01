#include <stdio.h>
#include <inttypes.h>

int main ()
{
  uint32_t n;

  scanf("%" SCNd32, &n);

  for (uint32_t i = 10; i <= n; i++)
  {
    uint32_t happyNum = i, s=0, m=1;

    while (happyNum > 0)
    {
      s += happyNum % 10;
      m *= happyNum % 10;
      happyNum /= 10;
    }
    
    if (s == m)
      printf("%" PRIu32 " ", i);

  }

	return 0;
}