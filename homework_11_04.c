/*
* =========================================================================== *
* @Author:		JovianHuang
* @Student ID:	416125000301
* @Filename:	homework_11_04.c
* @Description:	A homework which requires that the program be written to
				balabala
* @Version:		1.0.0.180521_alpha
* =========================================================================== *
*/
#include <stdio.h>

void Moves(int *, int, int);

int main(int argc, char const *argv[])
{
	int numTotal, numMoves;
	scanf("%d%d", &numTotal, &numMoves);

	int arrA[numTotal];
	for (int i = 0; i < numTotal; i++)
		scanf("%d", &arrA[i]);

	Moves(arrA, numTotal, numMoves);

	for (int i = 0; i < numTotal; i++)
		printf("%d ", arrA[i]);

	return 0;
}

void Moves(int *arrA, int numTotal, int numMoves)
{
	for (int i = 0; i < numMoves; i++)
	{
		int endNum = *(arrA + numTotal - 1);
		for (int j = numTotal - 1; j > 0; j--)
			*(arrA + j) = *(arrA + j - 1);
		*arrA = endNum;		
	}
}