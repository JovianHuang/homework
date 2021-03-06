/*
* =========================================================================== *
* @Author:		JovianHuang
* @Student ID:	416125000301
* @Filename:	homework_04_02.c
* @Description:	A homework which requires that the program be written to
				prompt the user to enter capital letters and print the
				letters in the pyramid below
* @Version:		1.0.0.180328_alpha
* =========================================================================== *
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i, j, columns;
	char letter, k;
	letter = getchar();
	columns = letter - 64;

	for (i = 1; i <= columns; i++)
	{
		for (j = 1; j <= columns - i + 1; j++)
			printf(" ");
		for (j = 1, k = 65; j <= i; j++, k++)
			printf("%c", k);
		for (j=1, k=65+i-2; j<i; j++, k--)
			printf("%c", k);
		putchar('\n');
	}
	return 0;
}