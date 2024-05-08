#include <stdio.h>

struct point
{
   float x;
   float y;
};

int main(void)
{
   struct point p;

   printf("Digite as cordenadas do ponto(x, y): ");
   scanf("%f %f", &p.x, &p.y);
   printf("O ponto fornecido foi: (%.2f, %.2f)\n", p.x, p.y);
   return 0;
}
