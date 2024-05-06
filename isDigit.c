#include <stdio.h>

int isDigit(char c)
{
   if ((c >= '0') && (c <= '9'))
      return 1;
   else
      return 0;
}

int main(void)
{
   char c;
   scanf("%c", &c);
   if (isDigit(c))
      printf("yes\n");
   else
      printf("no\n");
   return 0;
}
