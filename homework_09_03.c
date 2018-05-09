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

	int left = 0;
	int right = sizeof arrData / sizeof (int);

	printf("%d\n", bi_search(arrData, target, left, right));

	return 0;
}

int bi_search(int arrData[], int target, int left, int right)
{
	int result;
	int mid = (left + right) / 2;

	if (mid == right || mid == left)
		result = -1;
	else if (target == arrData[mid])
		result = mid;
	else
	{
		if (target > arrData[mid])
			left = mid;
		else
			right = mid;

		result = bi_search(arrData, target, left, right);
	}

	return result;
}