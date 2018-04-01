/*
* =========================================================================== *
* @Author:		JovianHuang
* @Student ID:	416125000301
* @Filename:	homework_180321_02.c
* @Description:	A homework which requires that the program be written to
				calculate and output the value of the piecewise function.
* @Version:		1.0.0.180321_alpha
* =========================================================================== *
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	float x, y;
	scanf("%f", &x);

	if (x > -10 && x <10)
	{
		if (x <= -5)
			y = x + 2;
		else if (x < 5)
			y = x;
		else
			y = x - 2;

		printf("%.2f\n", y);
	}
	else
		printf("overflow\n");
	
	return 0;
}
