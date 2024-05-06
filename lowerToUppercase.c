#include <stdio.h>

char uppercase(char);

int main(void)
{
   char c;

   do
   {
      scanf("%c", &c);
      printf("%c", uppercase(c));
   } while (c != '0');

   return 0;
}

char uppercase(char c)
{
   if ((c >= 'a') && (c <= 'z'))
      c = c - 'a' + 'A';
   return c;
}
