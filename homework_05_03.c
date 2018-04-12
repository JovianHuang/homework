/*
* =========================================================================== *
* @Author:		JovianHuang
* @Student ID:	416125000301
* @Filename:	homework_06_03.c
* @Description:	A homework which requires that the program be written to
				use functions to find the affinity number.
* @Version:		1.2.0.180412_beta
* =========================================================================== *
*/
#include <stdio.h>

int SumOfFactors(int);

int main(int argc, char const *argv[])
{
	int bound, i;
	scanf("%d", &bound);

	for (i = 220; i < bound; ++i)
	{
		int sum_a = SumOfFactors(i);		
		int sum_b = SumOfFactors(sum_a);
		
		if (sum_b == i && sum_a < sum_b)
				printf("%d %d\n", sum_b, sum_a);
	}

	return 0;
}

int SumOfFactors(int n)
{
	int sum = 0;
	int i;

	for (i = 1; i < n; i++)
	{
		if (!(n % i))
			sum += i;
	}

	return sum;
}	