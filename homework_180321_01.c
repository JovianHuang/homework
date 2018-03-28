/*
* =========================================================================== *
* @Author:		JovianHuang
* @Student ID:	416125000301
* @Filename:	homework_180321_01.c
* @Description:	A homework which requires that the program be written to
				calculate the area of triangle.
* @Version:		1.0.0.180321_alpha
* =========================================================================== *
*/
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	float la, lb, lc, area_of_triangle;
	float k;

	scanf("%f%f%f", &la, &lb, &lc);

	if (!(la+lb>lc && lb+lc>la && la+lc>lb))
	{
		printf("illegal\n");
	}
	else
	{
		k = (la + lb + lc) / 2;
		area_of_triangle = sqrt(k * (k-la) * (k-lb) * (k-lc));
		printf("%.2f\n", area_of_triangle);
	}

	return 0;
}


