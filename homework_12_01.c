/*
* =========================================================================== *
* @Author: 		JovianHuang
* @StudentID:	416125000301
* @Unit:		Class II, CS, School of IE, Hebei GEO University
* @Date:   2018-05-30 10:26:14
* @Description:
* @Version:		1.0.0.180530_alpha
* @Last Modified by:   Jovian
* @Last Modified time: 2018-06-06 10:59:09
* =========================================================================== *
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int num;
	float price;
	struct node *next;
}*LINK;

int main(void)
{
	LINK head = NULL, head = NULL;
	LINK current;
	int num;
	while (1)
	{
		scanf("%d", &num);
		if (!num)
			break;

		current = (LINK)malloc(sizeof(node));
		if (!head)			// first structure
			head = current;
		else				// subsequent structures
			prev->next = current;
		current->next = NULL;

		current->num = num;
		scanf("%f", &current->price);
		prev = current;
	}

	current = head;
	while (current != NULL)
	{
		printf("%d %.0f\n", current->num, current->price);
		current = current->next;
	}

	current = head;
	while (current != NULL)
	{
		free(current);
		current = current->next;
	}

	return 0;
}
