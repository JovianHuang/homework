/*
* =========================================================================== *
* @Author:		JovianHuang
* @Student ID:	416125000301
* @Filename:	homework_180328_05.c
* @Description:	A homework which requires that the program be written to
				prints all integer values from the given value to 10 greater
				than the given value
* @Version:		1.0.0.180328_alpha
* =========================================================================== *
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int integer, i;
	scanf("%d", &integer);
	for (i = 0; i < 11; i++)
	{
		printf("%d", integer);
		integer++;
		if (i < 10)
			printf(" ");
	}

	return 0;
}
