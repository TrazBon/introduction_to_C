#include <stdio.h>
#include <inttypes.h>

int main ()
{
  uint32_t n;
  uint8_t a[100],i=0;

	scanf("%" SCNu32, &n);
	
  while (n>0)
  {
    a[i] = n%10;
    
    for (uint8_t j = 0; j < i; j++)
    {
      if(a[i] == a[j])
      {
        printf("YES\n");
        return 0;
      }
    }

    n /= 10; // delete last number
    i++;
  } 

  printf("NO\n");

	return 0;
}