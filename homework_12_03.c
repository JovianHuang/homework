/*
* =========================================================================== *
* @Author: 		JovianHuang
* @StudentID:	416125000301
* @Unit:		Class II, CS, School of IE, Hebei GEO University   
* @Date:   2018-06-03 14:53:29
* @Description:	 
* @Version:		0.1.0.1800603_alpha
* @Last Modified by:   Jovian
* @Last Modified time: 2018-06-05 16:12:50
* =========================================================================== *
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node
{
	int num;
	struct node *next;
} *LINK;

LINK CreatLinkedList(void);
bool Judge(LINK);
void FreeMemory(LINK head);

int main(void)
{
	LINK head;
	head = CreatLinkedList();
	if (Judge(head))
		printf("YES\n");
	else
		printf("NO\n");

	FreeMemory(head);
	return 0;
}

LINK CreatLinkedList(void)
{
	LINK head, prev;
	head = prev = (LINK)malloc(sizeof(node));
	LINK current;
	int num;

	while (1)
	{
		scanf("%d", &num);
		if (!num)
			break;

		current = (LINK)malloc(sizeof(node));
		prev->next = current;
		current->next = NULL;

		current->num = num;
		prev = current;
	}

	return head;
}

void FreeMemory(LINK head)
{
	LINK current = head->next;
	while (current != NULL)
	{
		free(current);
		current = current->next;
	}
}

bool Judge(LINK head)
{
	bool isAsc = true;

	LINK current = head->next;

	while (current->next && isAsc)
	{
		if (current->num > (current->next)->num)
			isAsc = false;
		current = current->next;
	}

	return isAsc;
}