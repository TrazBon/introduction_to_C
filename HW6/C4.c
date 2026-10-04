// Описать функцию вычисления f(x) по формуле: 
// f(x)= x*x при -2 ≤ x < 2;
// x*x+4x+5 при x ≥ 2;
// 4 при x < -2.
// Используя эту функцию для n заданных чисел, вычислить f(x). Среди вычисленных значений найти наибольшее.

#include <stdio.h>
#include <inttypes.h>

int32_t fx(int32_t x);

int main ()
{
  char ch;
  int32_t x = 0, max = INT32_MIN;
  int8_t isLastSeparator = 1, sign = 1;
  

  while (1)
  {
    ch = getchar();
    
    if ((ch == '0') && (isLastSeparator)) // detect the end of data
    {
      break;
    }
    else if(ch == '-') // detect the sign '-'
    {
      sign = -1;
    }
    else if ((ch >= '0') && (ch <= '9')) // detect the number
    {
      x = (x * 10) + (ch - '0');
      isLastSeparator = 0;
    }
    else if (ch == ' ') // detect the end of the number
    {
      int result = fx(x * sign);
      max = (max > result) ? max : result;
      
      x = 0; // reset
      sign = 1; 
      isLastSeparator = 1;
    }
    else
    {
      isLastSeparator = 0;
    }
  }
  
  printf("%" PRId32 "\n", max);
	
  return 0;
}

int32_t fx(int32_t x)
{
  if ((x >= -2) && (x < 2))
    return x*x;
  else if (x >=2)
    return x * x + 4 * x + 5;
  else
    return 4;
}