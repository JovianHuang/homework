/*
* =========================================================================== *
* @Author:    JovianHuang
* @StudentID: 416125000301
* @Unit:    Class II, CS, School of IE, Hebei GEO University
* @Date:   2018-06-06 10:54:26
* @Description:
* @Version:   2.6.2.180606_alpha
* @Last Modified by:   Jovian
* @Last Modified time: 2018-06-06 17:30:14
* =========================================================================== *
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
  int num;
  struct node *next;
} *LINK, NODE;

LINK CreatLink(void);
bool IsEvenNum(int);
LINK DeleteEvenNode(LINK);
void PrintLink(LINK);
void FreeMemory(LINK);

int main(int argc, char const *argv[]) {
  LINK head;
  head = CreatLink();
  head = DeleteEvenNode(head);
  PrintLink(head);
  FreeMemory(head);
  return 0;
}

LINK CreatLink(void) {
  LINK head, prev;
  head = prev = (LINK)malloc(sizeof(NODE));
  head->next = NULL;
  LINK current;
  int num;
  while (1) {
    scanf("%d", &num);
    if (!num) {
      break;
    }
    current = (LINK)malloc(sizeof(NODE));
    prev->next = current;
    current->next = NULL;
    current->num = num;
    prev = current;
  }
  return head;
}

bool IsEvenNum(int num) {
  bool is_even = true;
  if (num % 2) {
    is_even = false;
  }
  return is_even;
}

LINK DeleteEvenNode(LINK head) {
  if (!head->next) {
    return head;
  }
  LINK current = head->next, prev = head;
  while (current) {
    if (!IsEvenNum(current->num)) {
      prev = current;
      current = current->next;
    } else {
      prev->next = current->next;
      free(current);
      current = prev->next;
    }
  }
  return head;
}

void PrintLink(LINK head) {
  if (!head->next) {
    printf("NULL\n");
  } else {
    LINK current = head->next;
    while (current) {
      printf("%d ", current->num);
      current = current->next;
    }
    printf("\n");
  }
}

void FreeMemory(LINK head) {
  LINK current = head->next;
  while (current) {
    free(current);
    current = current->next;
  }
}
