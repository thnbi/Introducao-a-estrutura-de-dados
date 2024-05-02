#include <stdio.h>

long unsigned fat(int);
int arranjo(int, int);

int main(void)
{
   printf("%d\n", arranjo(5, 2));
   return 0;
}

long unsigned fat(int n)
{
   unsigned long f = 1;

   for (int i = n; i > 1; i--)
   {
      f *= i;
   }

   return f;
}

int arranjo(int n, int k)
{
   return fat(n) / fat(n - k);
}
