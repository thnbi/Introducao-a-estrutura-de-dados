#include <stdio.h>

void letter(char c)
{
   if ((c >= 'A') && (c <= 'Z'))
      printf("\"%c\" é uma letra maiúscula!\n", c);
   else if ((c >= 'a') && (c <= 'z'))
      printf("\"%c\" é uma letra minúscula!\n", c);
   else
      printf("\"%c\" não é uma letra!\n", c);
}

int main(void)
{
   char c;
   scanf("%c", &c);
   letter(c);
   return 0;
}
