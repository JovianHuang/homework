/*
* =========================================================================== *
* @Author:		JovianHuang
* @Student ID:	416125000301
* @Filename:	homework_07_01.c
* @Description:	A homework which requires that the program be written to
				mix two string
* @Version:		1.2.0.180418_alpha
* =========================================================================== *
*/
#include <stdio.h>
#include <string.h>
#define STLEN 80

void StrMix(char *str1, char *str2xzzt, char *str3);

int main(int argc, char const *argv[])
{
	char str1[STLEN], str2[STLEN];
	char str3[STLEN*2];
	
	fgets(str1, STLEN, stdin);
	fgets(str2, STLEN, stdin);
	
	str1[strlen(str1)-1] = '\0';
	str2[strlen(str2)-1] = '\0';

	StrMix(str1, str2, str3);
	fputs(str3, stdout);

	return 0;
}

void StrMix(char *str1, char *str2, char *str3)
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	int len3 = len1 + len2;

	int i;
	int j = 0;
	for (i = 0; strlen(str3) < len3; i+=2)
	{
		strcpy(str3 + i, str1 + j);
		if (j < len2)
			strcpy(str3 + i + 1, str2 + j);
		j++;
	}
}	