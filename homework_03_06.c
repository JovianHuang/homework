/*
* =========================================================================== *
* @Author:		JovianHuang
* @Student ID:	416125000301
* @Filename:	homework_180328_06.c
* @Description:	A homework which requires that the program be written to
				judge whether the given positive integer is prime or not
* @Version:		1.0.0.180328_alpha
* =========================================================================== *
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int integer, i;
	int found = 1;
	scanf("%d", &integer);
	if (integer > 0)
	{
		for (i = 2; i < integer; i++)
		{
			if (!(integer % i))
			{
				found = 0;
				break;
			}
		}
		if (found)
			printf("Y\n");
		else
			printf("N\n");
	}
	else
		printf("input error\n");

	return 0;
}
