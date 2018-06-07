/*
* =========================================================================== *
* @Author: 		JovianHuang
* @StudentID:	416125000301
* @Unit:		Class II, CS, School of IE, Hebei GEO University   
* @Date:   2018-05-30 11:35:24
* @Description:	 
* @Version:		1.1.0.1800530_alpha
* @Last Modified by:   Jovian
* @Last Modified time: 2018-06-03 15:18:08
* =========================================================================== *
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	char letter;
	struct node *next;
} *LINK;

int main(void)
{
	LINK head, prev;
	head = prev = (LINK)malloc(sizeof(node));
	LINK current;
	char temp;
	while (1)
	{
		scanf("%c%*c", &temp);
		if (temp == '#')
			break;
		current = (LINK)malloc(sizeof(node));

		prev->next = current;	// prev point to current
		current->next = NULL;

		current->letter = temp;
		prev = current;			// current change into prev
	}

	prev->next = head->next;	// creat the circle

	LINK first = head->next;

	while (1)
	{
		current = head->next;
		do
		{
			printf("%c ", current->letter);
			current = current->next;
		} while (current != head->next);

		printf("\n");

		head->next = current->next;

		if (head->next == first)
			break;
	}

	current = head->next;
	while (current != head->next)
	{
		free(current);
		current = current->next;
	}
}
