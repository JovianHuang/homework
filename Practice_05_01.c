/*
* =========================================================================== *
* @Author:		JovianHuang
* @Student ID:	416125000301
* @Filename:	homework_05_01.c
* @Description:	A homework which requires that the program be written to
				find the affinity number
* @Version:		1.0.0.180404_alpha
* =========================================================================== *
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int bound, i, j;
	int target_a, target_b;
	scanf("%d", &bound);

	for (i = 220; i < bound; ++i)
	{
		int sum_a = 0, sum_b = 0;
		for (j = 1; j < i; ++j)
		{
			if (!(i % j))
				sum_a += j;
		}

		target_b = sum_a;

		for (j = 1; j < target_b; j++)
		{
			if (!(target_b % j))
				sum_b += j;
		}

		if (sum_b == i)
		{
			target_a = i;
			if (sum_a <= sum_b)
				continue;
			else
				printf("%d %d\n", target_a, target_b);
		}

	}

	return 0;
}
	