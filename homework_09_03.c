/*
* =========================================================================== *
* @Author:		JovianHuang
* @Student ID:	416125000301
* @Filename:	homework_09_03.c
* @Description:	A homework which requires that the program be written to
				balabala
* @Version:		1.4.2.180503_beta
* =========================================================================== *
*/
#include <stdio.h>

int bi_search(int *, int, int, int);

int main(int argc, char const *argv[])
{
	int arrData[] = {3,5,6,7,9,12,15};
	int target;
	scanf("%d", &target);

	int indexLeft = 0;
	int indexRight = sizeof arrData / sizeof (int);

	printf("%d\n", bi_search(arrData, target, indexLeft, indexRight));

	return 0;
}

int bi_search(int arrData[], int target, int indexLeft, int indexRight)
{
	int result;
	int indexMid = (indexLeft + indexRight) / 2;

	if (indexMid == indexRight || indexMid == indexLeft)
		result = -1;
	else if (target == arrData[indexMid])
		result = indexMid;
	else
	{
		if (target > arrData[indexMid])
			indexLeft = indexMid;
		else
			indexRight = indexMid;

		result = bi_search(arrData, target, indexLeft, indexRight);
	}

	return result;
}