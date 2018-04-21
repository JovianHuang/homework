/*	
*@ Author: 		JovianHuang
*@ E-mail: 		qianwei_king@163.com
*@ Filename:	myfunction.h
*@ Form:		Heibei GEO University, College of IE, CS, Class II
*@ Stduent ID:	416125000301
*@ Description:	Some functions to solve a homework, which is require me to split
				a given number standing for RMB face value, digit by digit and 
				print them. Beside, the unit and zero is under cosideration. 
				However, the functions I defined are a bit more, thus, I made 
				this file.
*@ Last Modify:	2018/04/19 09:04
*/
#define TEN_MILLION 100000000
				//	012345678
#define ROW 3
#define COLUMN 4

void SplitStore(int arrNumSplited[][COLUMN], int num)
{
	int i, j;
	int divisor = TEN_MILLION;
	for (i = 0; i < ROW; i++)
	{
		/* 	Store each number of the digits into the 3 rows, 4 columns array 
			digit by digit. */
		for (j = 0; j < COLUMN; j++)
		{
			if (!(i)) 
				j = 3;
			// Store numbers starting with [0][3] which is represent a billion
			arrNumSplited[i][j] = num / divisor; // Split the "highest" digit
			num %= divisor; // Leave the remaining digits
			divisor /= 10; // Digit down
		}
	}
}

void PrintDigit(int arrNumSplited[][COLUMN], int i, int j, int flag)
{
	int n = arrNumSplited[i][j];
	switch(n)
	{
		case 0:
				if (flag)
					printf("Áã");	break;
		case 1:printf("Ò¼");	break;
		case 2:printf("·¡");	break;
		case 3:printf("Èþ");	break;
		case 4:printf("ËÁ");	break;
		case 5:printf("Îé");	break;
		case 6:printf("Â½");	break;
		case 7:printf("Æâ");	break;
		case 8:printf("°Æ");	break;
		case 9:printf("¾Á");
	}
}

void PrintBasicUnit(int i, int j, int arrNumSplited[][COLUMN])
{
	if (arrNumSplited[i][j])
	{
		switch(j)
		{
			case 0:printf("Çª");	break;
			case 1:printf("°Û");	break;
			case 2:printf("Ê°");
		}
	}
}

void PrintAdvancedUnit(int i)
{
		switch(i)
	{
		case 0:printf("ÒÚ");	break;
		case 1:printf("Íò");	break;
		default :break;
	}
}

void PrintItAll(int arrNumSplited[][COLUMN])
{
	int i, j;
	for (i = 0; i < ROW; i++)
	{	
		/* 	To judge whether are all digits in this row == 0, if not, 
			print the "advanced unit" */
		int flag = 0;

		for (j = 0; j < COLUMN; j++)
		{
			if (arrNumSplited[i][j])
				flag = 1;

			PrintDigit(arrNumSplited, i, j, flag);
			PrintBasicUnit(i, j, arrNumSplited);
		}

		if (flag)
			PrintAdvancedUnit(i);
	}
	printf("Ôª\n"); 
}
