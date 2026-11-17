// Составить логическую функцию, которая определяет, что текущий символ это цифра. 
// Написать программу считающую количество цифр в тексте. int is_digit(char c)

#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>

bool is_digit(char c);

int main ()
{
  uint8_t countOfNumbers = 0;

	for (char ch = 0; ch != '.';)
  {
    ch = getchar();

    if (is_digit(ch))
      countOfNumbers++;
  }
  
  printf("%" PRIu8 "\n", countOfNumbers);

  return 0;
}

bool is_digit(char c)
{
  if ((c >= '0') && (c <= '9'))
    return true;
  
  return false;
}