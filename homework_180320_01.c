/*
* =========================================================================== *
* @Author:		JovianHuang
* @Student ID:	416125000301
* @Filename:	homework_180320_1.c
* @Description:	A homework which requires that the program be written to
				find the root of a one-dimensional quadratic equation
* @Version:		0.1.0.180320_base
* =========================================================================== *
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	float a, b, c;	// Coefficients of the one-dimensional quadratic equation
	float delta;
	scanf("%f%f%f", &a, &b, &c);

	delta = b * b - 4 * a * c;

	if (!a)
	{
		if (!b)
		{
			if (!c)
				printf("Meaningless\n");
			else
				printf("No root\n");
		}
		else
		{
			float x = -(c / b);
			printf("%f\n", x);
		}
	}
	else if (!delta)
		printf("二相同实根\n");
	else if (delta > 0)
		printf("二不相同实根\n");
	else
		printf("复数根\n");

	return 0;
}