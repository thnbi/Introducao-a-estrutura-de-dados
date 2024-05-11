#include <stdio.h>

int primo(int n)
{
   if (!(n % 2 == 0) && !(n % 3 == 0) && !(n % 5 == 0) && !(n % 7 == 0))
      return 1;
   else
      return 0;
}

int main(int argc, char **argv)
{
   if (primo(9))
      printf("primo!\n");
   else
      printf("n e primo :(\n");
   return 0;
}
