/*
* =========================================================================== *
* @Author:		JovianHuang
* @Student ID:	416125000301
* @Filename:	homework_07_05.c
* @Description:	A homework which requires that the program be written to
				find prime
* @Version:		2.2.3.180419_alpha
* =========================================================================== *
*/
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int Prime(int);
void Filter(_Bool[], int);

int main(int argc, char const *argv[])
{
	int bound, i;
	scanf("%d", &bound);

	_Bool arrPrime[bound];
	
	// Initialization the array. 
	arrPrime[1] = arrPrime[0] = 0;
	arrPrime[3] = arrPrime[2] = 1;
	for (i = 4; i < bound; i += 2)
	{
		arrPrime[i] = 0;	// All even except 2 aren't prime.
		arrPrime[i+1] = 1;	// Assume all odd are prime.
	}

	Filter(arrPrime, bound);
	
	for (i = 2; i < bound; i++)
	{
		if (arrPrime[i])
			printf("%d ", i);
	}

	return 0;
}

int Prime(int p)
{	// A basic method to judge it's prime or not
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

void Filter(_Bool arrPrime[], int bound)
{
	int i;
	for (i = 3; i < bound; i++)
	{
		if (!(arrPrime[i]))	// Skip composite number
			continue;

		if (Prime(i))
		{
			arrPrime[i] = 1;

			int j, subs;
			for (j = 2; subs < bound; j++)
			{
				subs = i * j;
				arrPrime[subs] = 0;
			}
		}
	}
}