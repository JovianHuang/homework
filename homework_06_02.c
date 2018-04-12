/*
* =========================================================================== *
* @Author:		JovianHuang
* @Student ID:	416125000301
* @Filename:	homework_06_02.c
* @Description:	A homework which requires that the program be written to
				calculate the of max an
* @Version:		1.3.2.180412_alpha
* =========================================================================== *
*/
#include <stdio.h>

void Swap(double[], int, int);
void SelectionSort(double[], int);

int main(int argc, char const *argv[])
{
	int size_arr;
	int i = 0;
	scanf("%d", &size_arr);
	double arrData[size_arr];

	for (i = 0; i < size_arr; i++)
		scanf("%lf", &arrData[i]);

	SelectionSort(arrData, size_arr);
	double max = arrData[0];
	double min = arrData[size_arr - 1];

	printf("%.1f\n", max - min);

	return 0;
}

void Swap(double arrData[], int i, int j)
{
	double temp = arrData[i];
	arrData[i] = arrData[j];
	arrData[j] = temp;
}

void SelectionSort(double arrData[], int size_arr)
{
	int i;
	for (i = 0; i < size_arr; i++)
	{
		int max = i;
		int j;
		for (j = i + 1; j < size_arr; j++)
		{
			if (arrData[j] > arrData[max])
				max = j;
		}
		if (max != i)
			Swap(arrData, max, i);
	}
}