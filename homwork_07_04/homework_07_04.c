/*
* =========================================================================== *
* @Author:		JovianHuang
* @Student ID:	416125000301
* @Filename:	homework_07_04.c
* @Description:	A homework which requires that the program be written to
				split a given number standing for RMB face value, digit 
				by digit and print them. 
* @Version:		2.6.1.180419_base
* =========================================================================== *
*/
// A stronger homework_07_04
#include <stdio.h>
#include "myfunction.h" // A header file made by myself
#define ROW 3
#define COLUMN 4

int main(int argc, char const *argv[])
{	
	int num;
	scanf("%d", &num);

	int arrNumSplited[ROW][COLUMN] = {0};
	/* 	Each row is stand for a "advanced unit", e.g. 'YI''WAN', meanwhile,
		each column is represent a "basic unit", e.g. 'QIAN''BAI''SHI'. 	*/

	SplitStore(arrNumSplited, num);
	
	PrintItAll(arrNumSplited);

	return 0;
}
