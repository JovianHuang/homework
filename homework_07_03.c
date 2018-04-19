/*
* =========================================================================== *
* @Author:		JovianHuang
* @Student ID:	416125000301
* @Filename:	homework_07_03.c
* @Description:	A homework which requires that the program be written to
				balabala(lazy)
* @Version:		1.0.0.180418_alpha
* =========================================================================== *
*/
#include <stdio.h>

int SearchFailed(int *, int);

int main(int argc, char const *argv[])
{
	int inum;
	scanf("%d", &inum);
	int iarrGarde[inum];

	int i;
	for (i = 0; i < inum; i++)
		scanf("%d", &iarrGarde[i]);

	int num_failed = SearchFailed(iarrGarde, inum);

	printf("%d\n", num_failed);

	return 0;
}

int SearchFailed(int *iarrGarde, int inum)
{
	int i;
	int num_failed = 0;
	for (i = 0; i < inum; i++)
	{
		if (iarrGarde[i] < 60)
			num_failed++;
	}

	return num_failed;
}