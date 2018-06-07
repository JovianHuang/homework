#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct link
{
    int ID;
    char Name[13];
    struct link *next;
} STU;

STU *CreateLink(STU *head,int n);   //创建按照学号升序排序的链表
void OutputLink(STU *head);        //输出当前链表中的学生信息
STU *InsertLink(STU *head,STU s);  //按学号大小查找位置，插入一个学生
STU *DeleteLink(STU *head,int n);  //按输入的学号删除一个学生

int main()
{
    STU *head = NULL,S_Stu;   //head是链表的头指针，S_Stu保存要插入的学生的信息
    int i_DelNum,n;           //i_DelNum保存要删除的学生的学号， n是用户初始输入的学生人数

    scanf("%d",&n);
    head = CreateLink(head,n);      //调用创建链表函数创建n个学生的有序链表

    //输入要插入的学生信息
    scanf("%d",&S_Stu.ID);
    getchar();
    gets(S_Stu.Name);

    head = InsertLink(head, S_Stu);    //调用插入函数将学生信息插入到链表中
    OutputLink(head);             //输出所有学生信息


    // 输入要删除的学生学号
    scanf("%d",&i_DelNum);
    head = DeleteLink(head, i_DelNum); //调用删除函数删除学号为i_DelNum的学生

    OutputLink(head);   //输出学生信息
    return 0;
}

STU *CreateLink(STU *head,int n)    //创建单链表的函数定义
{
    int i;
    STU *p = NULL,*pr = head;

    for(i=1; i<=n; i++)   //循环创建n个学生的链表
    {
        p = (STU *)malloc(sizeof(STU));
        if(NULL == p)
        {
            printf("No enough memory to allocate!\n");
            exit(0);
        }
        if(NULL == head) //如果原链表为空
        {
            head = p;
        }
        else    //如果原链表不空,将新节点添加到链尾
        {
            pr->next = p;
        }
        pr = p;
        // 输入学生的学号和姓名信息
        scanf("%d",&p->ID);
        getchar();
        gets(p->Name);
        p->next = NULL;

    }
    return head;

}
void OutputLink(STU *head)   //输出学生信息的函数定义
{
    STU *p;
    p = head;

    while(p != NULL)      //循环遍历链表输出每个学生的信息
    {
        printf("%3d%8s\n",p->ID,p->Name);
        p = p->next;
    }
}
STU *InsertLink(STU *head,STU s)   //插入学生信息的函数定义
{
    STU *p=head,*pr=head,*temp = NULL;

    p = (STU *)malloc(sizeof(STU));
    //为新学生申请空间

    if(NULL == p)
    {
        printf("No enough memory!");
        exit(0);
    }

    //将学生s信息填入结点空间中
    p->next = NULL;
    p->ID = s.ID;
    strcpy(p->Name,s.Name);

    if(NULL == head)   //链表为空，将学生插入链表头一个结点
    {
        head = p;
    }
    else    //链表不空，查找要插入学生的位置将学生插入
    {
        while(pr->ID < s.ID && pr->next != NULL)    //根据学号查找学生的插入位置
        {
            temp = pr;
            pr = pr->next;
        }
        if(pr->ID >= s.ID)
        {
            if(pr == head)    //将学生插入到第一个结点的位置
            {
                p->next = head;
                head = p;
            }
            else      //将学生插入到链表中间位置
            {
                temp->next = p;
                p->next = pr;
            }
        }
        else                    //将学生插入在链表的尾部
        {
            pr->next = p;
        }

    }
    return head;
}
STU *DeleteLink(STU *head,int n)   //删除学生的函数定义
{
    STU *p=head,*pr=head;
    if(NULL == head)            //链表为空，不用删除
    {
        printf("The link is empty!\n");
        return head;
    }
    while(n!=p->ID && p->next !=NULL)     //查找要删除学生的结点，并用p指向该结点，pr指向前一结点
    {
    	pr = p;
      p = p->next;
    }
    if(n == p->ID)
    {
        if(p == head)        //要删除结点是头结点，修改头指针
        {
          head = p->next;
        }
        else                 //要删除结点是中间结点
        {
            pr->next = p->next;
        }
        free(p);                 //释放已删除结点的空间
    }
    else                    //没有发现要删除的学生
    {
        printf("This student has not been found!\n");
    }
    return head;

}
