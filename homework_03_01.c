/*
* =========================================================================== *
* @Author:		JovianHuang
* @Student ID:	416125000301
* @Filename:	homework_180328_01.c
* @Description:	A homework which requires that the program be written to
				find the sum of the factorial values from 1 to n.
* @Version:		1.0.0.180328_alpha
* =========================================================================== *
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int factorial = 1, sum = 0;
	int n;
	scanf("%d", &n);
    int i;
	for (i = 1; i <= n; ++i)
	{
		factorial *= i;
		sum +=factorial;
	}

	printf("sum=%d\n", sum);

	return 0;
}
