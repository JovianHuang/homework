/*
* =========================================================================== *
* @Author:		JovianHuang
* @Student ID:	416125000301
* @Filename:	homework_180321_03.c
* @Description:	A homework which requires that the program be written to
				judge whether it can constitute a triangle
* @Version:		1.0.0.180321_alpha
* =========================================================================== *
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	float la, lb, lc;

	scanf("%f%f%f", &la, &lb, &lc);

	if (la+lb>lc && lb+lc>la && la+lc>lb)
	{
		if (la == lb && la == lc)
			printf("equilateral\n");
		else if (la == lb || la == lc || lb == lc)
			printf("isosceles\n");
		else
			printf("triangle\n");
	}
	else
		printf("error\n");

	return 0;
}
