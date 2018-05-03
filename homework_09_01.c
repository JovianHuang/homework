/*
* =========================================================================== *
* @Author:		JovianHuang
* @Student ID:	416125000301
* @Filename:	homework_09_01.c
* @Description:	A homework which requires that the program be written to
				calculate sum in recursion
* @Version:		1.0.0.180503_beta
* =========================================================================== *
*/
#include <stdio.h>

int sum_n(int);

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);
	printf("%d\n", sum_n(n));

	return 0;
}

int sum_n(int n)
{
	if (n == 1)
		n = 1;
	else
		n += sum_n(n - 1);

	return n;
}