#include <stdio.h>

int fibonacci(int n)
{
   int x;
   if (n == 1)
      return 1;
   if (n == 2)
      return 1;
   x = fibonacci(n - 1) + fibonacci(n - 2);
   return x;
}

int main(int argc, char **argv)
{
   int n;
   printf("digite o algorismo da sequencia de fibonacci que voce deseja saber");
   scanf("%d", &n);
   printf("%d\n", fibonacci(n));
   return 0;
}
