/*
* =========================================================================== *
* @Author:		JovianHuang
* @Student ID:	416125000301
* @Filename:	homework_09_02.c
* @Description:	A homework which requires that the program be written to
				balabala
* @Version:		1.1.0.180503_beta
* =========================================================================== *
*/
#include <stdio.h>

double cheby(double, int);

int main(int argc, char const *argv[])
{
	double x;
	int n;
	scanf("%lf%d", &x, &n);
	printf("%.2lf\n", cheby(x, n));

	return 0;
}

double cheby(double x, int n)
{
	if (!n)
		x = 1;
	else if (n == 1)
		x = x;
	else
		x = 2 * x * cheby(x, n - 1) - cheby(x, n - 2);

	return x;
}