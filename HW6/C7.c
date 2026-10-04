// Составить функцию, которая переводит число N из 
// десятичной системы счисления в P-ичную систему счисления.

#include <stdio.h>
#include <inttypes.h>

#define LENGHT_OF_ARRAY 20

void convert10(uint32_t n, uint8_t p);

int main ()
{
	uint32_t n;
  uint8_t p;

	scanf("%" SCNu32 "%" SCNu8, &n, &p);
  convert10(n,p);

  return 0;
}

void convert10(uint32_t n, uint8_t p)
{  
  uint32_t divider;
  char result[LENGHT_OF_ARRAY] = {0};
  uint8_t i=LENGHT_OF_ARRAY;

  do
  {
    divider = n / p;
    uint32_t convertedNumber = n - p * divider;
    result[--i] = convertedNumber + '0'; // The result is written in reverse, from end to begining
    n = divider;
  } while (divider > 0);

  uint8_t isPrintOn = 0;
  for (uint8_t i = 0; i < LENGHT_OF_ARRAY; i++) // Skip all empty items in the start until data is detected.
  {
    if(result[i] != 0)
      isPrintOn = 1;

    if (isPrintOn)
      putchar(result[i]);
  }
  putchar('\n');
}