/*
* =========================================================================== *
* @Author:		JovianHuang
* @Student ID:	416125000301
* @Filename:	homework_08_01.c
* @Description:	A homework which requires that the program be written to
				balabala
* @Version:		1.0.0.180425_alpha
* =========================================================================== *
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STRLEN 80

int is_within(char, char *);

int main(int argc, char const *argv[])
{
	char ch;
	char str[STRLEN];

	scanf("%c ", &ch);
	fgets(str, STRLEN, stdin);

	if (is_within(ch, str))
		printf("Yes\n");
	else
		printf("No\n");

	return 0;
}

int is_within(char ch, char *str)
{
	int found = 0;
	
	int i;
	for (i = 0; i < strlen(str); i++)
	{
		if (!(ch - str[i]))
			found = 1;
	}

	return found;
}