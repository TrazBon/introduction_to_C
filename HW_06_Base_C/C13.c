// Составить функцию, которая вычисляет косинус как сумму ряда (с точностью 0.001)
// cos(x) = 1 - x2/2! + x4/4! - x6/6! + ... (x в радианах)
// float cosinus(float x)

#include <stdio.h>
#include <inttypes.h>

float cosinus(float x);
uint64_t factorial(uint16_t n);
float power(float n, uint8_t p);
float module(float x);

int main ()
{
  float x;

	scanf("%f", &x);
  printf("%.3f\n", cosinus(x));
  
  return 0;
}

float cosinus(float x)
{
  float fx;
  float result = 1;
  uint16_t i = 2;
  int16_t sign = -1;
  x = x * (3.14159265359 / 180.); // converting to radians
  
  do
  {
    fx = (power(x,i) / (float)factorial(i));
    result = result + sign * fx;
    sign *= -1;
    i += 2;
  } while (!((fx < 0.001) || (module(result) < 0.001)));
  
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

float module(float x)
{
  return (x < 0) ? x * -1 : x;
}