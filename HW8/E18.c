// В диапазоне натуральных чисел от 2 до N определить, сколько из них кратны любому из чисел в диапазоне от 2 до 9.

#include <stdio.h>
#include <inttypes.h>

uint16_t getCountOfMultiples(uint16_t N, uint8_t x)
{
  uint16_t count = 0;

  for (uint16_t i = x; i <= N; i++)
  {
    if(i%x == 0){
      count++;
    }
  }
  
  return count;
}

int main ()
{
  uint16_t n;

  scanf("%" SCNu16, &n);
  
  for (uint8_t i = 2; i < 10; i++)
  {
    printf("%" PRIu8 " %" PRIu16 "\n", i, getCountOfMultiples(n, i));
  }
  

  return 0;
}