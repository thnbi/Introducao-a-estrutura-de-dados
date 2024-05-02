#include <stdio.h>

void troca(int *px, int *py)
{
   int temp;
   temp = *px;
   *px = *py;
   *py = temp;
}

int main(void)
{
   int h = 13, j = 25;
   troca(&h, &j);
   printf("H = %d | J = %d\n", h, j);
   return 0;
}
