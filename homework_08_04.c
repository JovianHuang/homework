/*
* =========================================================================== *
* @Author:		JovianHuang
* @Student ID:	416125000301
* @Filename:	homework_08_04.c
* @Description:	A homework which requires that the program be written to
				balabala
* @Version:		1.1.0.180425_alpha
* =========================================================================== *
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STRLEN 80

void DelSpace(char *);

int main(int argc, char const *argv[])
{
	char str[STRLEN];
	fgets(str, STRLEN, stdin);

	DelSpace(str);

	fputs(str, stdout);

	return 0;
}

void DelSpace(char *str)
{
	int i;
	const int space = 32;
	for (i = 0; i < strlen(str); i++)
	{
		if (!(str[i] - 32))
			strcpy(str + i, str + i + 1);
	}
}