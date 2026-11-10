// Написать только одну функцию. Всю программу отправлять не надо. 
// Вывести в порядке возрастания цифры, входящие в строку. Цифра - количество. 
// Функция должно строго соответствовать прототипу: void print_digit(char s[])

#include <stdio.h>
#include <inttypes.h>

void print_digit(char s[])
{
  short arrCountRepeats[10] = {0};

  for (int i = 0; s[i] != '\0'; i++) 
    if (s[i] >= '0' && s[i] <= '9')
      arrCountRepeats[s[i] - '0']++;

  for (short i = 0; i < 10; i++)
    if(arrCountRepeats[i] > 0)
      printf("%d %d \n", i, arrCountRepeats[i]);
}

int main ()
{
  print_digit("Hello123 world77.");

  return 0;
}