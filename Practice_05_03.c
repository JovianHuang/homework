/*
* =========================================================================== *
* @Author:		JovianHuang
* @Student ID:	416125000301
* @Filename:	homework_05_03.c
* @Description:	A homework which requires that the program be written to
				calculate something
* @Version:		1.0.0.180404_aphla
* =========================================================================== *
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a, b, c, i, target;
	scanf("%d%d%d", &a, &b, &c);
	int flag = 0;

	for (i = 1; !flag; i++)
	{
		if (i%3==a && i%5==b && i%7==c)
		{
			target = i;
			flag = 1;
		}
	}
	printf("%d\n", target);

	return 0;
}
	