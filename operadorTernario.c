#include <stdio.h>

int main(void)
{
   int a, b, menor, maior;
   printf("Digite dois numeros inteiros: ");
   scanf("%d%d", &a, &b);

   maior = a > b ? a : b;
   menor = a < b ? a : b;

   printf("%d > %d\n", maior, menor);
}
