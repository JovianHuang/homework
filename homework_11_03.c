/*
* =========================================================================== *
* @Author:		JovianHuang
* @Student ID:	416125000301
* @Filename:	homework_11_03.c
* @Description:	A homework which requires that the program be written to
				balabala
* @Version:		1.0.0.180521_alpha
* =========================================================================== *
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define M 80
#define N 3

int main()
{
	char *str[3], *t, stemp[M];
	int i, j, len;
	for (i = 0; i < N; i++)
	{
		fgets(stemp, M, stdin);
		len = strlen(stemp);

		// allocation space for str[i]
		str[i] = (char*)malloc(len + 1);

		strcpy(str[i], stemp);
	}

	// sort
	for (i = 0; i < N - 1; i++)
	{
		for (j = i + 1; j < N; j++)
		{
			if (strcmp(str[i], str[j]) > 0)
			{
				char *t;
				t = str[i];
				str[i] = str[j];
				str[j] = t;
			}
			
		}
	}

	for (i = 0; i < N; i++)
		fputs(str[i], stdout);

	return 0;
}