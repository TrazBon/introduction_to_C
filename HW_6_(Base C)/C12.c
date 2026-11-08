// Составить функцию, которая вычисляет синус как сумму ряда (с точностью 0.001)
// sin(x) = x - x3/3! + x5/5! - x7/7! + ...(x в радианах)
// float sinus(float x)

#include <stdio.h>
#include <inttypes.h>

float sinus(float x);
uint64_t factorial(uint16_t n);
float power(float n, uint8_t p);

int main ()
{
  float x;

	scanf("%f", &x);
  printf("%.3f\n", sinus(x));
  
  return 0;
}

float sinus(float x)
{
  float fx;
  float result = 0;
  uint16_t i = 1;
  int16_t sign = 1;
  x = x * (3.14 / 180.); // converting to radians
  
  do
  {
    fx = (power(x,i) / (float)factorial(i));
    result = result + sign * fx;
    i += 2;
    sign *= -1;
  } while(fx > 0.0001);
  
  return result;
}

uint64_t factorial(uint16_t n)
{
  uint64_t f=1;

  for (uint16_t i = 1; i <= n; i++)
    f *= i; 
  
  return f;
}

float power(float n, uint8_t p)
{
  if (p == 0) // exception for 0 power
    return 1;
  
  float result = n;

  for (uint8_t i = 1; i < p; i++)
    result *= n;  
    
  return result;
}