/*
* =========================================================================== *
* @Author:		JovianHuang
* @Student ID:	416125000301
* @Filename:	homework_11_02.c
* @Description:	A homework which requires that the program be written to
				balabala
* @Version:		1.0.0.180516_alpha
* =========================================================================== *
*/
#include <stdio.h>

void upperFirst(char *s);

int main()
{
	char s[80];
	gets(s);
	
	upperFirst(s);
	
	puts(s);

	return 0;
}

void upperFirst(char *s)
{
	int i;
	int isFirst = 1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z' && isFirst)
		{
			s[i] -= 'a' - 'A';
			isFirst = 0;
		}

		if (s[i] == ' ')
			isFirst = 1;
	}
}