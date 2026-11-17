// В последовательности записаны целые числа от M до N ( M меньше N, M больше или равно 1)в произвольном порядке, 
// но одно из чисел пропущено (остальные встречаются ровно по одному разу). 
// N не превосходит 1000. Последовательность заканчивается числом 0. Определить пропущенное число.

#include <stdio.h>
#include <stdbool.h>

#define SIZE_ARRAY 1001

int main ()
{
  bool flagsArray[SIZE_ARRAY] = {0};
  char c;
  int min = __INT16_MAX__, num = 0;

  while (!( ((c = getchar()) == '0') && (num == 0) ))
  {
    if(c >= '0' && c <= '9') 
    {
      num = num * 10 + c - '0';
    }
    else
    {
      if(min > num)
        min = num;
      flagsArray[num] = true;
      num = 0;
    }
  }

  for (num = min; flagsArray[num]; num++);
  printf("%d\n", num);
  return 0;
}