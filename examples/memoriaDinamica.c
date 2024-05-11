#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int *v;
   v = (int *)malloc(10 * sizeof(int));
   if (v == NULL)
   {
      printf("memoria insuficiente!\n");
      exit(1);
   }
   return 0;
}
