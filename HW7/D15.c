// Дана последовательность ненулевых целых чисел, завершающаяся числом 0. 
// Ноль в последовательность не входит. Определите наибольшее значение числа в этой последовательности. 
// Для решения задачи необходимо написать рекурсивную функцию вида: int max_find(int max)

#include <stdio.h>
#include <inttypes.h>

int16_t max_find(int16_t max);

int main ()
{
  printf("%" PRId16 "\n", max_find(INT16_MIN));
	
  return 0;
}

int16_t max_find(int16_t max)
{
  char previousCh, ch = ' ';
  int16_t num = 0;
  int8_t sign = 1;

  do
  {
    previousCh = ch;
    ch = getchar();

    if ((ch == '-') && (previousCh == ' ')) // Save sign
      sign = -1;
    else if ((ch >= '0') && (ch <= '9')) // Save tne number
      num = (num * 10) + (ch - '0');
    else if (ch == ' ') // Separate and check
    {
      num *= sign;
      if (num > max)
        return max_find(num);

      num = 0;
      sign = 1;
    }
  } while (!((previousCh == ' ') && (ch == '0')));
  
  
  return max;
}