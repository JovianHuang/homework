/*
* =========================================================================== *
* @Author:		JovianHuang
* @Student ID:	416125000301
* @Filename:	homework_06_03.c
* @Description:	A homework which requires that the program be written to
				use functions to find the affinity number.
* @Version:		1.0.0.180411_alpha
* =========================================================================== *
*/
#include <stdio.h>

int SumOfFactors(int);

int main(int argc, char const *argv[])
{
	int bound, i;
	int target_a, target_b;
	scanf("%d", &bound);

	for (i = 220; i < bound; ++i)
	{
		int sum_a = SumOfFactors(i);

		target_b = sum_a;
		
		int sum_b = SumOfFactors(target_b);
		
		if (sum_b == i && sum_a > sum_b)
		{
			target_a = i;
				printf("%d %d\n", target_a, target_b);
		}
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