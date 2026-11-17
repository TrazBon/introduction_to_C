#include <stdio.h>
#include <inttypes.h>

int main ()
{
  uint32_t n;

	scanf("%" SCNu32, &n);
	
  while (n>10)
  { 
    uint8_t numum = n%10;
    uint8_t prenumum = (n/10)%10;
    
    if(prenumum >= numum)
    {
      printf("NO\n");
      return 0;
    }

    n /= 10; // delete last number
  } 

  printf("YES\n");

	return 0;
}