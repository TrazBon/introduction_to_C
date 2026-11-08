// Функция Аккермана
// Реализуйте данную функцию по прототипу
// int akkerman(int m, int n)

#include <stdio.h>
#include <inttypes.h>

int64_t akkerman(uint16_t m, uint16_t n);

int main ()
{
  uint16_t m,n;

  scanf("%" SCNu16 "%" SCNu16, &m, &n);
  printf("%" PRId64 "\n", akkerman(m, n));
  
  return 0;
}

int64_t akkerman(uint16_t m, uint16_t n)
{
  if(m == 0)
    return ++n;
  else if ((m > 0) && (n == 0))
    return akkerman(m - 1,1);
  else 
    return akkerman(m - 1, akkerman(m, n - 1));
}