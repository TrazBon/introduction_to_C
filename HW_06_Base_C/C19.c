// Составить функцию, которая преобразует текущий символ цифры в число. 
// Написать программу считающую сумму цифр в тексте. int digit_to_num(char c)

#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>

uint8_t digit_to_num(char c);

int main ()
{
  uint64_t sum = 0;

	for (char ch = 0; ch != '.';)
  {
    ch = getchar();
    sum += digit_to_num(ch);
  }
  
  printf("%" PRIu64 "\n", sum);

  return 0;
}

uint8_t digit_to_num(char c)
{
  if ((c >= '0') && (c <= '9'))
    return c - '0';
  
  return 0;
}