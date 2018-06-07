#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct link
{
    int ID;
    char Name[13];
    struct link *next;
} STU;

STU *CreateLink(STU *head,int n);   //��������ѧ���������������
void OutputLink(STU *head);        //�����ǰ�����е�ѧ����Ϣ
STU *InsertLink(STU *head,STU s);  //��ѧ�Ŵ�С����λ�ã�����һ��ѧ��
STU *DeleteLink(STU *head,int n);  //�������ѧ��ɾ��һ��ѧ��

int main()
{
    STU *head = NULL,S_Stu;   //head�������ͷָ�룬S_Stu����Ҫ�����ѧ������Ϣ
    int i_DelNum,n;           //i_DelNum����Ҫɾ����ѧ����ѧ�ţ� n���û���ʼ�����ѧ������

    scanf("%d",&n);
    head = CreateLink(head,n);      //���ô�������������n��ѧ������������

    //����Ҫ�����ѧ����Ϣ
    scanf("%d",&S_Stu.ID);
    getchar();
    gets(S_Stu.Name);

    head = InsertLink(head, S_Stu);    //���ò��뺯����ѧ����Ϣ���뵽������
    OutputLink(head);             //�������ѧ����Ϣ


    // ����Ҫɾ����ѧ��ѧ��
    scanf("%d",&i_DelNum);
    head = DeleteLink(head, i_DelNum); //����ɾ������ɾ��ѧ��Ϊi_DelNum��ѧ��

    OutputLink(head);   //���ѧ����Ϣ
    return 0;
}

STU *CreateLink(STU *head,int n)    //����������ĺ�������
{
    int i;
    STU *p = NULL,*pr = head;

    for(i=1; i<=n; i++)   //ѭ������n��ѧ��������
    {
        p = (STU *)malloc(sizeof(STU));
        if(NULL == p)
        {
            printf("No enough memory to allocate!\n");
            exit(0);
        }
        if(NULL == head) //���ԭ����Ϊ��
        {
            head = p;
        }
        else    //���ԭ������,���½ڵ���ӵ���β
        {
            pr->next = p;
        }
        pr = p;
        // ����ѧ����ѧ�ź�������Ϣ
        scanf("%d",&p->ID);
        getchar();
        gets(p->Name);
        p->next = NULL;

    }
    return head;

}
void OutputLink(STU *head)   //���ѧ����Ϣ�ĺ�������
{
    STU *p;
    p = head;

    while(p != NULL)      //ѭ�������������ÿ��ѧ������Ϣ
    {
        printf("%3d%8s\n",p->ID,p->Name);
        p = p->next;
    }
}
STU *InsertLink(STU *head,STU s)   //����ѧ����Ϣ�ĺ�������
{
    STU *p=head,*pr=head,*temp = NULL;

    p = (STU *)malloc(sizeof(STU));
    //Ϊ��ѧ������ռ�

    if(NULL == p)
    {
        printf("No enough memory!");
        exit(0);
    }

    //��ѧ��s��Ϣ������ռ���
    p->next = NULL;
    p->ID = s.ID;
    strcpy(p->Name,s.Name);

    if(NULL == head)   //����Ϊ�գ���ѧ����������ͷһ�����
    {
        head = p;
    }
    else    //�����գ�����Ҫ����ѧ����λ�ý�ѧ������
    {
        while(pr->ID < s.ID && pr->next != NULL)    //����ѧ�Ų���ѧ���Ĳ���λ��
        {
            temp = pr;
            pr = pr->next;
        }
        if(pr->ID >= s.ID)
        {
            if(pr == head)    //��ѧ�����뵽��һ������λ��
            {
                p->next = head;
                head = p;
            }
            else      //��ѧ�����뵽�����м�λ��
            {
                temp->next = p;
                p->next = pr;
            }
        }
        else                    //��ѧ�������������β��
        {
            pr->next = p;
        }

    }
    return head;
}
STU *DeleteLink(STU *head,int n)   //ɾ��ѧ���ĺ�������
{
    STU *p=head,*pr=head;
    if(NULL == head)            //����Ϊ�գ�����ɾ��
    {
        printf("The link is empty!\n");
        return head;
    }
    while(n!=p->ID && p->next !=NULL)     //����Ҫɾ��ѧ���Ľ�㣬����pָ��ý�㣬prָ��ǰһ���
    {
    	pr = p;
      p = p->next;
    }
    if(n == p->ID)
    {
        if(p == head)        //Ҫɾ�������ͷ��㣬�޸�ͷָ��
        {
          head = p->next;
        }
        else                 //Ҫɾ��������м���
        {
            pr->next = p->next;
        }
        free(p);                 //�ͷ���ɾ�����Ŀռ�
    }
    else                    //û�з���Ҫɾ����ѧ��
    {
        printf("This student has not been found!\n");
    }
    return head;

}
