// Проверить строку состоящую из скобок "(" и ")" на корректность.

#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>

int8_t getBracket(char ch); // '(' = 1; ')' = -1

int main ()
{
  int16_t sumOfBrackets = 0;

	for (char ch = 0; ch != '.';)
  {
    ch = getchar();
    sumOfBrackets += getBracket(ch);
    if (sumOfBrackets < 0)
      break;
  }
  
  sumOfBrackets == 0 ? printf("YES\n") : printf("NO\n");

  return 0;
}

int8_t getBracket(char ch)
{
  switch (ch)
  {
  case '(':
    return 1;
    break;

  case ')':
    return -1;
    break;

  default:
    break;
  }

  return 0;
}