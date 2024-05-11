#include <stdio.h>

int main(void)
{
   int f;
   float p, h;

   printf("Digite altura em cm: ");
   scanf("%f", &h);

   f = (int)(h / 30.48);
   p = (h - f * 30.48) / 2.54;

   printf("Altura: %dft %.1fpol\n", f, p);

   return 0;
}
