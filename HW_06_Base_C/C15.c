// Составить функцию логическую функцию, которая определяет, верно ли, 
// что в заданном числе все цифры стоят по возрастанию. 
// Используя данную функцию решить задачу. int grow_up(int n)

#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>

bool grow_up(uint64_t n);

int main ()
{
  uint64_t n;
	scanf("%" SCNu64, &n);
  grow_up(n) ? printf("YES\n") : printf("NO\n"); 

  return 0;
}


bool grow_up(uint64_t n)
{
  uint8_t a, b = UINT8_MAX;
  
  do
  {
    a = n % 10;
    if(a >= b)
      return 0;
    n /= 10;
    b = a;
  } while (n>0);

  return 1;
}
  