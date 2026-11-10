// Написать функцию и программу демонстрирующую работу данной функции. 
// Вывести в порядке возрастания цифры, входящие в десятичную запись натурального числа N, не более 1000 цифр. 
// Цифра пробел сколько раз данная цифра встречается в числе.

#include <stdio.h>
#include <inttypes.h>

void countNumbers()
{
  short arrCountRepeats[10] = {0};
  char c;

  while ((c = getchar()) != '\n' && c != ' ') 
    if (c >= '0' && c <= '9')
      arrCountRepeats[c - '0']++;

  for (short i = 0; i < 10; i++)
    if(arrCountRepeats[i] > 0)
      printf("%d %d \n", i, arrCountRepeats[i]);
}

int main ()
{
  countNumbers();
  return 0;
}