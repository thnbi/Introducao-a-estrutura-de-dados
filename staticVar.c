#include <stdio.h>

void print(int a)
{
   static int n = 1;

   printf("%d ", a);
   if ((n % 5) == 0)
      printf("\n");
   n++;
}

int main(void)
{
   for (int i = 1; i <= 20; i++)
      print(i);
   return 0;
}
