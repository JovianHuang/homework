/*
* =========================================================================== *
* @Author:		JovianHuang
* @Student ID:	416125000301
* @Filename:	homework_180328_02.c
* @Description:	A homework which requires that the program be written to
				calculate compound interest investment
* @Version:		1.0.0.180328_alpha
* =========================================================================== *
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int years = 0;
	double deirdre, daphne, dollar, interest_of_daphne;
	scanf("%lf", &dollar);
	deirdre = daphne = dollar;
	interest_of_daphne = daphne * 0.1;

    while (deirdre <= daphne)
	{
		daphne += interest_of_daphne;
		deirdre += deirdre * 0.05;
		years++;
	}

	printf("%d years,Deirdre=%.3f,Daphne=%.3f\n", years, deirdre, daphne);

	return 0;
}
