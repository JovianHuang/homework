/*
* =========================================================================== *
* @Author:		JovianHuang
* @Student ID:	416125000301
* @Filename:	homework_10_01.c
* @Description:	A homework which requires that the program be written to
				sort three double type numbers with their pointers.
* @Version:		1.0.0.180509_alpha
* =========================================================================== *
*/
#include <stdio.h>

void Sort(double*, double*, double*);
void Swap(double *, double *);


int main(int argc, char const *argv[])
{	
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);
	
	Sort(&a, &b, &c);
	printf("%.1f %.1f %.1f \n", a, b, c);

	return 0;
}

void Sort(double *min, double *mid, double *max)
{	
	if (*min > *mid)
		Swap(min, mid);
	if (*min > *max)
		Swap(min, max);
	if (*mid > *max)
		Swap(mid, max);
}

void Swap(double *a, double *b)
{
	double t = *a;
	*a = *b;
	*b = t;
}