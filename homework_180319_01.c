/*
* =========================================================================== *
* @Author:		JovianHuang
* @Filename:	homework_180319_01.c
* @Description:	A homework which requires that the program be written to
				switch a, b, c and output them.
* @Version:		1.0.0.180319_aphla
* =========================================================================== *
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	// Get three integers from user
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);

	int temp = b;
	b = a;
	a = c;
	c = temp;

	printf("a=%d,b=%d,c=%d\n", a, b, c);

	return 0;
}
