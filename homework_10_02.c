/*
* =========================================================================== *
* @Author:		JovianHuang
* @Student ID:	416125000301
* @Filename:	homework_10_02.c
* @Description:	A homework which requires that the program be written to
				
* @Version:		1.0.0.180509_alpha
* =========================================================================== *
*/
#include <stdio.h>

void larger_of(double *, double *);

int main(int argc, char const *argv[])
{
	double x, y;
	scanf("%lf%lf", &x, &y);

	larger_of(&x, &y);
	printf("%.0f %.0f\n", x, y);

	return 0;
}

void larger_of(double *x, double *y)
{	
	if (*x > *y)
		*y = *x;
	else
		*x = *y;
}