/*
* =========================================================================== *
* @Author:		JovianHuang
* @Student ID:	416125000301
* @Filename:	homework_180328_07.c
* @Description:	A homework which requires that the program be written to
				perform character substitution
* @Version:		1.0.0.180329_alpha
* =========================================================================== *
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int count = 0;
	char ch;

	while (1)
	{
		ch = getchar();
		if (ch == '.')
		{
			ch = '!';
			putchar(ch);
			count++;
			continue;
		}
		else if (ch == '!')
		{
			ch = '!';
			putchar(ch);
			putchar(ch);
			count++;
			continue;
		}
		else if (ch == '#')
			break;
		else
			putchar(ch);
	}
	printf("%d\n", count);

	return 0;
}
