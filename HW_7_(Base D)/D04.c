// Дано натуральное число N. Выведите все его цифры по одной, в прямом порядке, 
// разделяя их пробелами или новыми строками. Необходимо реализовать рекурсивную функцию.
// void print_num(int num)

#include <stdio.h>
#include <inttypes.h>

void print_num(uint16_t num);

int main ()
{
  uint16_t n;

  scanf("%" SCNu16, &n);
  print_num(n);
  
  return 0;
}

void print_num(uint16_t num)
{
  if (num/10 != 0)
    print_num(num/10);
  
  printf("%" PRIu16 " ", num%10);
}