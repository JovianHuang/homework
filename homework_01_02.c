/*
* =========================================================================== *
* @Author:		JovianHuang
* @Student ID:	416125000301
* @Filename:	homework_180319_02.c
* @Description:	A homework which requires that the program be written to
				calculates the sum, difference, product, quotient,
				divisibility, and remainder of two integers and output
				them.
* @Version:		0.1.0.180319_base
* =========================================================================== *
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num_1, num_2;
	scanf("%d%d", &num_1, &num_2);

	int sum, difference, product, divisibility, remainder;
	float quotient;

	sum = num_1 + num_2;
	difference = num_1 - num_2;
	product = num_1 * num_2;
	quotient = (float)(num_1) / num_2;
	divisibility = num_1 / num_2;
	remainder = num_1 % num_2;

	printf("%d\n", sum);
	printf("%d\n", difference);
	printf("%d\n", product);
	printf("%.2f\n", quotient);
	printf("%d\n", divisibility);
	printf("%d\n", remainder);

	return 0;
}
