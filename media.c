#include <stdio.h>

float media(float *, int);
float variancia(float *, int, float);

int main(void)
{
   int n;
   printf("Digite a quantidade de valores para calculo da media: ");
   scanf("%d", &n);
   float v[n];
   float med, var;

   for (int i = 0; i < n; i++)
      scanf("%f", &v[i]);

   med = media(v, n);
   var = variancia(v, n, med);
   printf("Media = %.2f | Variancia = %.2f\n", med, var);
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
