#include <stdio.h>
#include <inttypes.h>

int main ()
{
  uint32_t n,s=0;

	scanf("%" SCNu32, &n);
	
  while (n>10)
  {
    uint8_t numumber = n%10;
    uint8_t prenumumber = (n/10)%10;

    if (numumber == prenumumber)
    {
      printf("YES\n");
      return 0;
    }

    n /= 10; // delete last number
  } 

  printf("NO\n");

	return 0;
}
