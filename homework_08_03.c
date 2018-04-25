/*
* =========================================================================== *
* @Author:		JovianHuang
* @Student ID:	416125000301
* @Filename:	homework_08_03.c
* @Description:	A homework which requires that the program be written to
				balabala
* @Version:		1.2.2.180425_alpha
* =========================================================================== *
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STRLEN 80

int Judge(char *);
int myStrLen(char *);

int main(int argc, char const *argv[])
{
	char str[STRLEN];
	fgets(str, STRLEN, stdin);

	if (Judge(str))
		printf("yes\n");
	else
		printf("no\n");

	return 0;
}

int Judge(char *str)
{
	int equal = 1;

	int i, j;
	int len = myStrLen(str) - 1;
	for (i = 0, j = len; j - i > 0; i++, j--)
	{
		if (str[i] - str[j])
		{
			equal = 0;
			break;
		}
	}

	return equal;
}

int myStrLen(char *str)
{
	int len = 0;
	while (str[len])
		len++;

	len -= 1; // Abort <CR>

	return len;
}
