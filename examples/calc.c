#include <stdio.h>

int main(void)
{
   float a, b;
   char op;

   printf("Digite uma conta seguindo: digito operador digito\n");
   scanf("%f %c %f", &a, &op, &b);

   switch (op)
   {
   case '+':
      printf(" = %.2f\n", (a + b));
      break;
   case '-':
      printf(" = %.2f\n", (a - b));
      break;
   case '*':
      printf(" =%.2f\n", (a * b));
      break;
   case '/':
      printf(" = %.2f\n", (a / b));
      break;
   default:
      printf("operador invalido");
   }
   return 0;
}
