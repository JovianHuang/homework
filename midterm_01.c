#include <stdio.h>

void fun(int[3][4], int[]);

int main()
{
	int i, j;
	int a[3][4];
	int bar[3];

	for (i = 0; i < 3; i++)
		for (j = 0; j < 4; j++)
			scanf("%d", &a[i][j]);

	fun(a, bar);

	for (i = 0; i < 3; i++)
	{
		printf("%d", bar[i]);
		if (i < 2)
			printf(" ");
	}

	return 0;
}

void fun(int a[3][4], int bar[3])
{
	int i , j;
	for (i = 0; i < 3; i++)
	{
		int max = a[i][0];
		for (j = 0; j < 4; j++)
		{
			if (a[i][j] > max)
				max = a[i][j];
		}

		bar[i] = max;
	}
}