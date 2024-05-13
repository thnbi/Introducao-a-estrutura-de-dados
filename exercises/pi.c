#include <stdio.h>

double pi(int n)
{
   double pi = 0;
   int i;
   for (i = 0; i < n; i++)
   {
      pi += 4.0 * (i % 2 == 0 ? 1 : -1) / (2 * i + 1);
   }
   return pi;
}

int main(int argc, char **argv)
{
   long unsigned int n = 9999999;
   printf("%f\n", pi(n));
   return 0;
}
