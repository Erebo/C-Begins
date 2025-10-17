#include <stdio.h>
#include <stdlib.h>
struct student
{
    int data;
    struct student *next;
};
struct student *head = NULL;
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
void createNode(int x)
{
    struct student *newnode;
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
void insertBegin()
{
    int x;
    printf("Enter Data at the Beginning : ");
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
    printf("Enter Ending Data :");
    scanf("%d", &x);
    struct student *newnode;
    newnode = (struct student *)malloc(sizeof(struct student));
    newnode->data = x;
    newnode->next = NULL;
    struct student *i = head;
    while (i->next != NULL)
    {
        i = i->next;
    }
    i->next = newnode;
}
void insertAny()
{
    int x;
    printf("Enter data that you want to insert :");
    scanf("%d", &x);
    int pos;
    printf("Enter the data after which you want to insert :");
    scanf("%d", &pos);
    struct student *newnode;
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
        while (i != NULL && i->data != pos)
        {
            i = i->next;
        }
        if (i == NULL)
        {
            printf("There is no such data !\n");
        }
        else
        {
            newnode->next = i->next;
            i->next = newnode;
        }
    }
}
void deleteFirst()
{
    if (head == NULL)
    {
        printf("There's nothing to delete !");
    }
    else if (head->next == NULL)
    {
        head = NULL;
    }
    else
    {
        head = head->next;
    }
    printf("After deleting the first node :\n");
}
void delelteLast()
{
    if (head == NULL)
    {
        printf("There's nothing to delete !\n");
    }
    else if (head->next == NULL)
    {
        head = NULL;
    }
    else
    {
        struct student *i = head;
        while (i->next->next != NULL)
        {
            i = i->next;
        }
        i->next = NULL;
    }
    printf("After deleting the last node :\n");
}
void deleteAny()
{
    int x;
    printf("Enter the data that you want to delete :");
    scanf("%d", &x);
    if (head == NULL)
    {
        printf("There's nothing to delete !");
    }
    else if (head->data == x)
    {
        head = head->next;
    }
    else
    {
        struct student *i = head;
        while (i->next != NULL &&i->next->data != x)
        {
            i = i->next;
        }
        if(i->next==NULL){
            printf("There's no such data !");
        }
        i->next = i->next->next;
    }
}
int main()
{
    createNode(4);
    createNode(5);
    createNode(6);
    print();
    insertBegin();
    print();
    insertBegin();
    print();
    insertBegin();
    print();
    insertEnd();
    print();
    insertAny();
    print();
    deleteFirst();
    print();
    delelteLast();
    print();
    deleteAny();
    print();

    return 0;
}