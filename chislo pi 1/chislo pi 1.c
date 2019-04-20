#include <stdio.h>
#include <math.h>

int main()
{
	int signs; double pi; double tenth = 0.1;
	printf("the precision with which to write pi\n");
	scanf_s("%d", &signs);
	double exactness = pow(tenth, signs);
	double drob;
	int i = 1;
	pi = 0;
	do
	{
		drob = (double)4 / (2 * i - 1);
		pi -= pow(-1, i)*drob;
		i++;
	}
	while (drob >= exactness);
			printf("%.*lf",signs, pi);
	return 0;
}