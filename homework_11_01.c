/*
* =========================================================================== *
* @Author:		JovianHuang
* @Student ID:	416125000301
* @Filename:	homework_11_01.c
* @Description:	A homework which requires that the program be written to
				delete 
* @Version:		1.0.0.180516_alpha
* =========================================================================== *
*/
#include <stdio.h>
#define N 80

int fun(int *, int);

int main(int argc, char const *argv[])
{
	int a[N], n, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	n = fun(a, n);
	
	for (i = 0; i < n; i++)
		printf("%3d", a[i]);
	printf("\n");

	return 0;
}

int fun(int a[], int n)
{
	int i, j;
	for (i = 1, j = 0; i < n; i++)
	{
		if (a[i] != a[j])
			a[++j] = a[i];
	}

	return j + 1;
}