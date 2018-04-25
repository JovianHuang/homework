/*
* =========================================================================== *
* @Author:		JovianHuang
* @Student ID:	416125000301
* @Filename:	homework_08_02.c
* @Description:	A homework which requires that the program be written to
				balabala
* @Version:		1.2.3.180425_alpha
* =========================================================================== *
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STRLEN 20

int myStrLen(char *);

int main(int argc, char const *argv[])
{
	char str[STRLEN];

	fgets(str, STRLEN, stdin);

	int len = myStrLen(str);

	printf("%d\n", len);

	return 0;
}

int myStrLen(char *str)
{
	int len = 0;
	while (str[len])
		len++;

	len -= 1; // Abort <CR>
	if (len >10)
		len = 10;

	return len;
}