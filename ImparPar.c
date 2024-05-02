#include <stdio.h>

int main(void)
{
   int a, b;

   printf("Digite dois numeros inteiros ");
   scanf("%d%d", &a, &b);

   if ((a % 2 == 0) && (b % 2 == 0))
      printf("Foram digitados dois numeros pares \n");

   return 0;
}
