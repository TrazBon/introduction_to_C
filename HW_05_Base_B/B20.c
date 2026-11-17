#include <stdio.h>
#include <inttypes.h>

int main ()
{
  uint32_t n;

  scanf("%" SCNd32, &n);

  if(n < 2) // to exclude 0 and 1
  { 
    printf("NO\n");
    return 0;
  }

  for (uint32_t i = 2; i < n; i++)
  {
    if ((n%i) == 0){
      printf("NO\n");
      return 0;
    }
  }
  
  printf("YES\n");

	return 0;
}