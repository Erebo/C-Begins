#include <stdio.h>
#include <stdlib.h>
struct student
{
    int data;
    struct student *next;
};
struct student *start = NULL;
void print()
{
    struct student *i = start;
    while (i != NULL)
    {
        printf("%d->", i->data);
        i = i->next;
    }
    printf("NULL\n");
}
void CreateNewNode()
{
    struct student *newnode;
    int value;
    printf("Enter Data : ");
    scanf("%d", &value);
    newnode = (struct student *)malloc(sizeof(struct student));
    newnode->data = value;
    newnode->next = NULL;
    if (start == NULL)
    {
        start = newnode;
    }
    else
    {
        struct student *i = start;
        while (i->next != NULL)
        {
            i = i->next;
        }
        i->next = newnode;
    }
}
void InsertBegin()
{
    struct student *newnode;
    int value;
    printf("Enter Beginning Data : ");
    scanf("%d", &value);
    newnode = (struct student *)malloc(sizeof(struct student));
    newnode->data = value;
    newnode->next = NULL;
    newnode->next = start;
    start = newnode;
}
void InsertEnd()
{
    struct student *newnode;
    int value;
    printf("Enter Ending Data : ");
    scanf("%d", &value);
    newnode = (struct student *)malloc(sizeof(struct student));
    newnode->data = value;
    newnode->next = NULL;
    if (start == NULL)
    {
        start = newnode;
    }
    else
    {
        struct student *i = start;
        while (i->next != NULL)
        {
            i = i->next;
        }
        i->next = newnode;
    }
}
void InsertAny()
{
    struct student *newnode;
    int value;
    printf("Enter New Data : ");
    scanf("%d", &value);
    newnode = (struct student *)malloc(sizeof(struct student));
    newnode->data = value;
    newnode->next = NULL;
    if (start == NULL)
    {
        start = newnode;
    }
    else
    {
        int x;
        printf("After which element you want to insert : ");
        scanf("%d", &x);
        struct student *i = start;
        while (i->data != x)
        {
            i = i->next;
        }
        newnode->next = i->next;
        i->next = newnode;
    }
}
void deletefirst()
{
    if (start == NULL)
    {
        printf("There is no element !");
    }
    else
    {
        struct student *temp = start;
        start = start->next;
        free(temp);
    }
}
void deletelast()
{
    if (start == NULL)
    {
        printf("There's nothing to delete");
    } else if (start->next==NULL){
        start=NULL;
    }
    else
    {
        struct student *i = start;
        while (i->next->next != NULL)
        {
            i = i->next;
        }
        i->next = NULL;
    }
}
void deleteany(){
    int x;
    printf("Which element you want to delete : ");
    scanf("%d",&x);
    if(start==NULL){
        printf("There is no element to delete");
    } else if(start->data==x){
        start = start-> next;
    } 
    else{
    struct student *i=start;
    while(i->next->data!=x){
        i=i->next;
    }
    i->next=i->next->next;
    }
}
int main()
{
        CreateNewNode();
        CreateNewNode();
        CreateNewNode();
        CreateNewNode();
        print();
        InsertBegin();
        print();
        InsertEnd();
        print();
        InsertAny();
        print();
        deletefirst();
        print();           
        deletelast();
        print();
        deleteany();
        print();
    return 0;
}

