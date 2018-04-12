/*
* =========================================================================== *
* @Author:		JovianHuang
* @Student ID:	416125000301
* @Filename:	homework_05_01.c
* @Description:	A homework which requires that the program be written to
				use function to verify Goldbach's Conjecture
* @Version:		1.2.0.180412_beta
* =========================================================================== *
*/
#include <stdio.h>
#include <math.h>

int prime(int);
void Goldbach(int);

int main(int argc, char const *argv[])
{
	int m, n, i;
	scanf("%d%d", &m, &n);

	for (i = m; i <= n; i += 2)
		Goldbach(i);

	return 0;
}

int prime(int p)
{
	int bound = (int)sqrt(p) + 1;

	if (p <= 1)
		return 0;
	int i;
	for (i = 2; i < bound; i++)
	{
		if (!(p % i))
			return 0;
	}

	return 1;
}

void Goldbach(int n)
{
	int i;
	for (i = 3; i < n; i++)
	{
		if (prime(i))
		{
			int temp = n - i;
			if (prime(temp) && temp >= i)
			{
				printf("%d = %d + %d\n", n, i, temp);
				break;
			}
		}
		else
			continue;
	}
}