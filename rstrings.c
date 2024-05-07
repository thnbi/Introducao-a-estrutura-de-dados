#include <stdio.h>

void print_rec(char *s)
{
   if (s[0] != '\0')
   {
      printf("%c", s[0]);
      print_rec(&s[1]);
   }
   else
      printf("\n");
}

void print_inv(char *s)
{
   if (s[0] != '\0')
   {
      print_inv(&s[1]);
      printf("%c", s[0]);
   }
}

int main(void)
{
   char s[] = "jordanna";
   print_inv(s);
   return 0;
}
