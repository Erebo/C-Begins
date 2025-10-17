#include <stdio.h>
#include <stdlib.h>
struct student
{
    int data;
    struct student *next;
};
struct student *head = NULL;
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
void print()
{
    if (head == NULL)
    {
        printf("The linked list is empty !");
    }
    else
    {
        struct student *i = head;
        while (i != NULL)
        {
            printf("%d->", i->data);
            i = i->next;
        }
        printf("NULL\n");
    }
}
void insertFirst()
{
    int x;
    printf("Enter data to insert First : ");
    scanf("%d", &x);
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
        newnode->next = head;
        head = newnode;
    }
}
void insertEnd()
{
    int x;
    printf("Enter the data to insert End :");
    scanf("%d", &x);
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
void insertAny()
{
    int x;
    printf("Enter the data that you want to insert :");
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
            printf("There is no such element !\n");
            printf("Choose from the available element below :");
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
        printf("There's no data to delete !");
    }
    else
    {
        printf("After deleting the first node :");
        head = head->next;
    }
}
void deleteLast()
{
    if (head == NULL)
    {
        printf("There's no data to delete !");
    }
    else
    {
        struct student *i = head;
        while (i->next->next != NULL)
        {
            i = i->next;
        }
        printf("After deleting the last node : ");
        i->next = NULL;
    }
}
void deleteAny()
{
    int x;
    printf("Enter the data you want to delete :\n");
    scanf("%d", &x);
    if (head == NULL)
    {
        printf("There is no data to delete !");
    }
    else if (head->data == x)
    {
        head = head->next;
    }
    else
    {
        struct student *i = head;
        while (i->next != NULL && i->next->data != x)
        {
            i = i->next;
        }
        if (i->next == NULL)
        {
            printf("There's no such data to delete !\n");
        }
        else
        {
            i->next = i->next->next;
        }
    }
}
int main()
{
    createNode(3);
    createNode(4);
    createNode(5);
    print();
    insertFirst();
    print();
    insertFirst();
    print();
    insertEnd();
    print();
    insertAny();
    print();
    deleteFirst();
    print();
    deleteLast();
    print();
    deleteAny();
    print();
}