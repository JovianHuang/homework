/*
* =========================================================================== *
* @Author:      JovianHuang
* @StudentID:   416125000301
* @Unit:        Class II, CS, School of IE, Hebei GEO University
* @Date:   2018-06-06 11:06:59
* @Description:
* @Version:     0.1.0.180606_alpha
* @Last Modified by:   Jovian
* @Last Modified time: 2018-06-06 22:17:59
* =========================================================================== *
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
int data;
    struct node *next;
} NODE, *LINK;

LINK CrtLink(void) {
  LINK head, p, tail;
  tail = head = (LINK)malloc(sizeof(NODE));
  head->next = NULL;
  while(1) {
    int x;
    scanf("%d", &x);
    if(!x) {
      break;
    }
    p = (LINK)malloc(sizeof(NODE));
    p->data = x;
    tail->next = p;
    tail = p;
  }
  tail->next = NULL;
  return head;
}

void reverseLL(LINK head) {
  LINK temp = NULL, p = NULL;
  if (!head) {
    return NULL;
  }
  temp = head->next;
  while (temp->next) {
    p = temp->next;
    temp->next = p->next;
    p->next = head->next;
    head->next = p;
  }
}

void printLink(LINK head) {
  LINK p;
  p = head->next;
  while (p) {
    printf("%d ",p->data);
    p = p->next;
  }
  printf("\n");
}

int main(){
  LINK head;
  int m;
  head = CrtLink();
  reverseLL(head);
  printLink(head);
  return 0;
}
