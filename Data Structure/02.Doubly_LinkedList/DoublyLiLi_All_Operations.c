#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Node
{
    char word[50];
    struct Node *pre, *next;
};
struct Node *head = NULL;
struct Node *tail = NULL;
void ForwardPrint()
{
    if (head == NULL)
    {
        printf("Linked List is empty !\n");
    }
    else
    {
        struct Node *i = head;
        while (i != NULL)
        {
            printf("%s->", i->word);
            i = i->next;
        }
        printf("NULL\n");
    }
}
void ReversePrint()
{
    if (tail == NULL)
    {
        printf("Linked List is empty !\n");
    }
    else
    {
        struct Node *i = tail;
        while (i != NULL)
        {
            printf("%s->", i->word);
            i = i->pre;
        }
        printf("NULL\n");
    }
}
void LinkedListCreation()
{
    struct Node *s1, *s2, *s3;
    s1 = (struct Node *)malloc(sizeof(struct Node));
    s2 = (struct Node *)malloc(sizeof(struct Node));
    s3 = (struct Node *)malloc(sizeof(struct Node));
    strcpy(s1->word, "Alpha");
    strcpy(s2->word, "Beta");
    strcpy(s3->word, "Gamma");
    s1->pre = NULL;
    s2->pre = s1;
    s3->pre = s2;
    s1->next = s2;
    s2->next = s3;
    s3->next = NULL;
    head = s1;
    tail = s3;
}
void CountNode()
{
    if (head == NULL)
    {
        printf("Total Node : 0\n");
    }
    else
    {
        int count = 0;
        struct Node *i = head;
        while (i != NULL)
        {
            i = i->next;
            count++;
        }
        printf("Total Node :%d\n", count);
    }
}
void SearchNode()
{
    if (head == NULL)
    {
        printf("There's no node to search !\n");
    }
    else
    {
        char search[50];
        printf("Enter the data to search : ");
        scanf("%s", search);
        struct Node *i = head;
        int position = 1;
        while (i != NULL && strcmp(i->word, search) != 0)
        {
            i = i->next;
            position++;
        }
        if (i == NULL)
        {
            printf("Data not found ! \n");
        }
        else
        {
            printf("Data is found and at %dth position\n", position);
        }
    }
}
void InsertBegin()
{
    char newword[50];
    printf("Enter the data to insert at the beginning :");
    scanf("%s", newword);
    struct Node *newnode;
    newnode = (struct Node *)malloc(sizeof(struct Node));
    strcpy(newnode->word, newword);
    newnode->pre = NULL;
    newnode->next = NULL;
    if (head == NULL)
    {
        head = newnode;
        printf("Insertion Successful .\n");
    }
    else
    {
        newnode->next = head;
        head->pre = newnode;
        head = newnode;
        printf("Insertion Successful .\n");
    }
}
void InsertEnd()
{
    char newword[50];
    printf("Enter the data to insert at the End :");
    scanf("%s", newword);
    struct Node *newnode;
    newnode = (struct Node *)malloc(sizeof(struct Node));
    strcpy(newnode->word, newword);
    newnode->pre = NULL;
    newnode->next = NULL;
    if (head == NULL)
    {
        head = newnode;
        printf("Insertion Successful .\n");
    }
    else
    {
        struct Node *i = head;
        while (i->next != NULL)
        {
            i = i->next;
        }
        i->next = newnode;
        newnode->pre = i;
        printf("Insertion Successful .\n");
    }
}
void InsertAny()
{
    char newword[50];
    printf("Enter the new data :");
    scanf("%s", newword);
    struct Node *newnode;
    newnode = (struct Node *)malloc(sizeof(struct Node));
    strcpy(newnode->word, newword);
    newnode->pre = NULL;
    newnode->next = NULL;
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        char target[50];
        printf("Enter the data after which you want to insert : ");
        scanf("%s", target);
        struct Node *i = head;
        while (i != NULL && strcmp(i->word, target) != 0)
        {
            i = i->next;
        }
        if (i == NULL)
        {
            printf("There's no such data !\n");
        }
        else
        {
            if (i->next == NULL)
            {
                newnode->pre = i;
                i->next = newnode;
                printf("Insertion Successful .\n");
            }
            else
            {
                newnode->pre = i;
                newnode->next = i->next;
                i->next->pre = newnode;
                i->next = newnode;
                printf("Insertion Successful .\n");
            }
        }
    }
}
void DeleteFirst()
{
    if (head == NULL)
    {
        printf("There's no data to delete !\n");
    }
    else
    {
        if (head->next == NULL)
        {
            head = NULL;
            printf("Deletation Successful .\n");
        }
        else
        {
            head = head->next;
            printf("Deletation Successful .\n");
        }
    }
}
void DeleteLast()
{
    if (head == NULL)
    {
        printf("There's no data to delete !\n");
    }
    else
    {
        if (head->next == NULL)
        {
            head = NULL;
            printf("Deletation Successful .\n");
        }
        else
        {
            struct Node *i = head;
            while (i->next->next != NULL)
            {
                i = i->next;
            }
            i->next = NULL;
            tail = i;
            printf("Deletation Successful .\n");
        }
    }
}
void DeleteAny()
{
    if (head == NULL)
    {
        printf("There's no data to delete !\n");
    }
    else
    {
        char target[50];
        printf("Enter the data you want to delete :");
        scanf("%s", target);
        if (strcmp(head->word, target) == 0)
        {
            head = head->next;
        }
        else
        {
            struct Node *i = head;
            while (i->next != NULL && strcmp(i->next->word, target) != 0)
            {
                i = i->next;
            }
            if (i->next == NULL)
            {
                printf("There's no such data !\n");
            }
            else
            {
                i->next = i->next->next;
                printf("Delete Successful \n");
            }
        }
    }
}
int main()
{
    LinkedListCreation();
    ForwardPrint();
    ReversePrint();
    InsertBegin();
    ForwardPrint();
    InsertEnd();
    ForwardPrint();
    InsertAny();
    ForwardPrint();
    CountNode();
    DeleteFirst();
    ForwardPrint();
    DeleteLast();
    ForwardPrint();
    DeleteAny();
    ForwardPrint();
    CountNode();
    SearchNode();
}