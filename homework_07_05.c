/*
* =========================================================================== *
* @Author:		JovianHuang
* @Student ID:	416125000301
* @Filename:	homework_07_05.c
* @Description:	A homework which requires that the program be written to
				find prime
* @Version:		2.3.2.180422_alpha
* =========================================================================== *
*/
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#define LIMIT 2000000
			//0123456

int Prime(int);
void Filter(_Bool[], int);

int main(int argc, char const *argv[])
{
	int bound, i;
	scanf("%d", &bound);

	_Bool arrPrime[LIMIT];
	// Initialization the array. 
	arrPrime[1] = arrPrime[0] = 0;
	arrPrime[2] = 1;
	for (i = 3; i < LIMIT; i ++)
		arrPrime[i] = i % 2 == 0 ? 0 : 1;
		// All even except 2 aren't prime. Assume all odd are prime.

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
		int index = 0;
		if (!(arrPrime[i]))	// Skip composite number
			continue;

		if (Prime(i))
		{
			arrPrime[i] = 1;

			int j;
			for (j = 2; index < bound; j++)
			{
				index = i * j;
				arrPrime[index] = 0;
			}
		}
	}
}