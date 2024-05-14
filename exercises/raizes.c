#include <stdio.h>
#include <math.h>

int raizes(float a, float b, float c, float *x1, float *x2)
{
	float delta = b*b - 4*a*c;
	if (delta < 0)
	{
		return 0;
	}
	else
	{
		*x1 = (-b + sqrt(delta)) / (2*a);
		*x2 = (-b - sqrt(delta)) / (2*a);
		return 1;

	}
}

int main(int argc, char **argv)
{
	float a, b, c, x1, x2;
	printf("Digite os coeficientes a, b e c: ");
	scanf("%f %f %f", &a, &b, &c);
	if (raizes(a, b, c, &x1, &x2))
	{
		printf("As raizes sao %f e %f\n", x1, x2);
	}
	else
	{
		printf("Nao ha raizes reais\n");
	}
	return 0;
}
