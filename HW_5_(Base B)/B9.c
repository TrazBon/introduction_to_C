#include <stdio.h>
#include <inttypes.h>

int main ()
{
  uint32_t n;

	scanf("%" SCNu32, &n);
	
  while (n>0)
  { 
    if( ((n%10)%2) != 0)
    {
      printf("NO\n");
      return 0;
    }
    
    n /= 10; // delete last number
  } 

  printf("YES\n");

	return 0;
}