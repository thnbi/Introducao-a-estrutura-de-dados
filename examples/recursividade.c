#include <stdio.h>

int fat(int);

int main(void)
{
   int a;
   printf("Digite um numero \"n\" para receber n!: ");
   scanf("%d", &a);
   printf("%d! = %d\n", a, fat(a));
   return 0;
}

int fat(int a)
{
   if (a == 0)
      return 1;
   else
      return a * fat(a - 1);
}
