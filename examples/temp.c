#include <stdio.h>

int main(void)
{
   int temp;
   printf("Digite a temperatura: ");
   scanf("%d", &temp);

   if (temp < 10)
      printf("esta muito frio!\n");
   else if (temp < 20)
      printf("esta frio!\n");
   else if (temp < 30)
      printf("nem frio nem quente!\n");
   else
      printf("esta calor!\n");

   return 0;
}
