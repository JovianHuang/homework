/*
* =========================================================================== *
* @Author:		JovianHuang
* @Student ID:	416125000301
* @Filename:	homework_180328_04.c
* @Description:	A homework which requires that the program be written to
				calculat how much can you earn if balabal
* @Version:		1.0.0.180328_alpha
* =========================================================================== *
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int sum = 0;
	int n;
	scanf("%d", &n);
    int i;
	for (i = 0; i < n; i++)
	{
		sum += i + 1;
	}
	printf("sum=%d\n", sum);

	return 0;
}
