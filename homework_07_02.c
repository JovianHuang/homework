/*
* =========================================================================== *
* @Author:		JovianHuang
* @Student ID:	416125000301
* @Filename:	homework_07_02.c
* @Description:	A homework which requires that the program be written to
				balabala(lazy)
* @Version:		1.1.2.180423_alpha
* =========================================================================== *
*/
#include <stdio.h>

int SearchMax(int, int[][5], int[]);

int main(int argc, char const *argv[])
{
	int ibound;
	scanf("%d", &ibound);
	int iarrGrade[ibound][5];	// Store those grade

	int i, j;
	for (i = 0; i < ibound; i++)
	{
		for (j = 0; j < 5; j++)
			scanf("%d", &iarrGrade[i][j]);
	}

	int iSub[2] = {0};	// Store the subscripts, [0] present num of row
	int max = SearchMax(ibound, iarrGrade, iSub);

	printf("%d %d %d\n", max, iSub[0] + 1, iSub[1] + 1);

	return 0;
}

int SearchMax(int ibound, int iarrGrade[][5], int iSub[])
{
	int i, j;
	int max = 0;
	for (i = 0; i < ibound; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (!i && !j)
				max = iarrGrade[i][j];

			if (max < iarrGrade[i][j])
			{
				max = iarrGrade[i][j];
				iSub[0] = i;
				iSub[1] = j;
			}
		}
	}

	return max;
}
