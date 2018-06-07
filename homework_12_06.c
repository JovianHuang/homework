/*
* =========================================================================== *
* @Author:      JovianHuang
* @StudentID:   416125000301
* @Unit:        Class II, CS, School of IE, Hebei GEO University   
* @Date:   2018-05-31 18:48:32
* @Description:  
* @Version:     0.1.0.180_alpha
* @Last Modified by:   Jovian
* @Last Modified time: 2018-06-03 15:47:44
* =========================================================================== *
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct NODE
{
    int data;
    struct NODE *next;
} *LINK;

LINK CrtLink(void)
{
    LINK head, p, tail;
    tail = head = (LINK)malloc(sizeof(NODE));
    head->next = NULL;
    while(1)
    {
        int x;
        scanf("%d", &x);
        if(!x) break;
        p = (LINK)malloc(sizeof(NODE));
        p->data = x;
        tail->next = p;
        tail = p;
    }
    tail->next = NULL;
    return head;
}
int lenLL(LINK head)
{
    int num = 0;
    LINK p = head->next;

    while (p)
    {
        num++;
        p = p->next;
    }

    return num;
}

void lastM(LINK head, int m)
{
    int len = lenLL(head);
    int order = len - m;
    
    int count;
    LINK p = head->next;
    for (count = 0; count < order; count++)
    {
        p = p->next;
    }

    printf("%d\n", p->data);

}

int main(){
    LINK head;
    head = CrtLink();
    
    int m;
    scanf("%d", &m);
    lastM(head, m);
    
    return 0;
}
