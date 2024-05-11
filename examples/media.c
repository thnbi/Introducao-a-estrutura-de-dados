#include <stdio.h>
#include <stdlib.h>

float media(float *, int);
float variancia(float *, int, float);

int main(void)
{
   int n;
   float *v;
   float med, var;

   printf("Digite a quantidade de valores para calculo da media: ");
   scanf("%d", &n);

   v = (float *)malloc(n * sizeof(float));
   if (v == NULL)
   {
      printf("Memoria insuficiente1");
      exit(1);
   }

   for (int i = 0; i < n; i++)
      scanf("%f", &v[i]);

   med = media(v, n);
   var = variancia(v, n, med);
   printf("Media = %.2f | Variancia = %.2f\n", med, var);

   free(v);
   return 0;
}

float media(float *v, int n)
{
   float med = 0.0f;
   for (int i = 0; i < n; i++)
      med += v[i];
   return (med / n);
}

float variancia(float *v, int n, float med)
{
   float var = 0.0f;
   for (int i = 0; i < n; i++)
      var += (v[i] - med) * (v[i] - med);
   return (var / n);
}
