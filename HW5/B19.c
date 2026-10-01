#include <stdio.h>
#include <inttypes.h>

int main ()
{
  uint32_t n,s=0;

  scanf("%" SCNd32, &n);

  while (n > 0)
  {
    s += n % 10;
    n /= 10;
  }
  
  (s == 10) ? printf("YES\n") : printf("NO\n");

	return 0;
}