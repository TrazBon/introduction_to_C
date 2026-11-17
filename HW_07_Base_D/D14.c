// Дана последовательность целых чисел через пробел, завершающаяся числом 0. 
// Выведите все нечетные числа из этой последовательности, сохраняя их порядок.

#include <stdio.h>
#include <inttypes.h>

void recursiveInput(char previousCh);

int main ()
{
  recursiveInput(' ');
	
  return 0;
}

void recursiveInput(char previousCh)
{
  static int16_t num = 0;
  static int8_t sign = 1;
  char ch = getchar();

  if ((ch == '0') && (previousCh == ' ')) // End of line
    return;
  else if ((ch == '-') && (previousCh == ' ')) // Save sign
    sign = -1;
  else if ((ch >= '0') && (ch <= '9')) // Save tne number
    num = (num * 10) + (ch - '0');
  else if (ch == ' ') // Separate and check
  {
    if (num%2 != 0)
      printf("%" PRId16 " ", num * sign);
    
    num = 0;
    sign = 1;
  }

  recursiveInput(ch);
}