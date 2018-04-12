/*
* =========================================================================== *
* @Author:		JovianHuang
* @Student ID:	416125000301
* @Filename:	homework_06_01.c
* @Description:	A homework which requires that the program be written to
				use selection sort to descend a set of data
* @Version:		1.2.0.180412_alpha
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
	for (i = 0; i < size_arr; i++)
		printf("%.1lf ", arrData[i]);

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