/*
* =========================================================================== *
* @Author:		JovianHuang
* @Student ID:	416125000301
* @Filename:	homework_05_02.c
* @Description:	A homework which requires that the program be written to
				calculate the average grade of Student
* @Version:		1.2.0.180404_aphla
* =========================================================================== *
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i;
	float average[5];

	for (i = 0; i < 5; i++)
	{	
		int g1, g2, g3;	// Grades
		scanf("%d%d%d\n", &g1, &g2, &g3);
		average[i] = (float)(g1 + g2 + g3) / 3;
	}

	for (i = 0; i < 5; i++)
	{
		printf("%.2f\n", average[i]);
	}

	return 0;
}
	