// Требуется по заданной координате определить цвет клетки шахматной доски.

#include <stdio.h>

int main ()
{
  char x,y,cell;
  scanf("%c%c", &x, &y);
  
  if(((y - 'A') % 2) == 0)
    cell = (((x - 'A') % 2) == 0) ? 1 : 0;
  else
    cell = (((x - 'A') % 2) == 0) ? 0 : 1;
  
  cell ? printf("BLACK\n") : printf("WHITE\n");
  
  return 0;
}