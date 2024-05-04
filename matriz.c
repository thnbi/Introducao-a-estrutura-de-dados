#include <stdio.h>
#include <stdlib.h>

float *transpostaVetorSimples(int, int, float *);
float **transpostaVetorPonteiros(int, int, float **);
float *cria(int);
float acessa(int, float *, int, int);

int main(void)
{
   return 0;
}

float *transpostaVetorSimples(int m, int n, float *mat)
{
   /* aloca matriz transposta */
   float *trp = (float *)malloc(n * m * sizeof(float));

   /* preenche matriz */
   for (int i = 0; i < m; i++)
      for (int j = 0; j < m; j++)
         trp[j * m + i] = mat[i * n + j];

   return trp;
}

float **transpostaVetorPonteiros(int m, int n, float **mat)
{
   float **trp;
   int i;

   /* aloca matriz transposta: n linhas, m colunas */
   trp = (float **)malloc(n * sizeof(float));
   for (int i = 0; i < n; i++)
      trp[i] = (float *)malloc(m * sizeof(float));

   /* preenche matriz */
   for (i = 0; i < m; i++)
      for (int j = 0; j < n; j++)
         trp[j][i] = mat[i][j];

   return trp;
}

float *cria(int n)
{
   int s = n * (n - 1) / 2;
   float *mat = (float *)malloc(s * sizeof(float));
   return mat;
}

float acessa(int n, float *mat, int i, int j)
{
   int k; // indice do elemento do vetor
   if (i < 0 || i >= n || j < 0 || j >= n)
   {
      printf("Acesso invalido\n");
      exit(1);
   }

   if (i >= j)
      k = i * (i + 1) / 2 + j;
   else
      k = j * (j + 1) / 2 + i;

   return mat[k];
}
