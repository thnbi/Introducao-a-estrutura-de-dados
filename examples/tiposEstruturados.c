#include <stdio.h>

struct point
{
   float x;
   float y;
};

void print(struct point *pp)
{
   printf("O ponto fornecido foi: (%.2f, %.2f)\n", pp->x, pp->y);
}

void read(struct point *pp)
{
   printf("Digite as cordenadas do ponto(x, y): ");
   scanf("%f %f", &pp->x, &pp->y);
}

int main(void)
{
   struct point p;

   read(&p);
   print(&p);

   return 0;
}
