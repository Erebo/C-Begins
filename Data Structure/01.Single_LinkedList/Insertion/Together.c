#include <stdio.h>
#include <stdlib.h>
struct student
{
    int data;
    struct student *next;
};
struct student *head;
void print()
{
    struct student *i = head;
    while (i != NULL)
    {
        printf("%d->", i->data);
        i = i->next;
    }
    printf("NULL\n");
}
void insertBegin()
{
    int x;
    printf("Enter Beginning Data : ");
    scanf("%d", &x);
    struct student *newnode;
    newnode = (struct student *)malloc(sizeof(struct student));
    newnode->data = x;
    newnode->next = NULL;
    newnode->next = head;
    head = newnode;
}
void insertEnd()
{
    int x;
    printf("Enter Ending Data : ");
    scanf("%d", &x);
    struct student *newnode = NULL;
    newnode = (struct student *)malloc(sizeof(struct student));
    newnode->data = x;
    newnode->next = NULL;
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        struct student *i = head;
        while (i->next != NULL)
        {
            i = i->next;
        }
        i->next = newnode;
    }
}
void insertAny(){
    int x,pos;
    printf("Enter new data : ");
    scanf("%d",&x);
    printf("Enter the data after which you want to insert : ");
    scanf("%d",&pos);
    struct student *newnode;
    newnode=(struct student*)malloc(sizeof(struct student));
    newnode->data=x;
    newnode->next=NULL;
    struct student *i=head;
    while(i->data != pos){
        i=i->next;
    }
    newnode->next=i->next;
    i->next=newnode;
}
int main()
{
    insertBegin();
    print();
    insertBegin();
    print();
    insertBegin();
    print();
    insertBegin();
    print();
    insertEnd();
    print();
    insertEnd();
    print();
    insertAny();
    print();
    insertAny();
    print();

    return 0;
}
