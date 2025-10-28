#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
    char Book[50];
    struct node *next;
};
struct node *head = NULL;
void push(char Name[50])
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    strcpy(newnode->Book, Name);
    newnode->next = NULL;
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        struct node *i = head;
        while (i->next != NULL)
        {
            i = i->next;
        }
        i->next = newnode;
    }
}
void pop()
{
    if (head == NULL)
    {
        printf("Stack is empty !\n");
    }
    else if (head->next == NULL)
    {
        head = NULL;
    }
    else
    {
        struct node *i = head;
        while (i->next->next != NULL)
        {
            i = i->next;
        }
        i->next = NULL;
    }
}
void traverse()
{
    if (head == NULL)
    {
        printf("Stack is empty !\n");
    }
    else
    {
        struct node *i = head;
        while (i != NULL)
        {
            printf("%s->", i->Book);
            i = i->next;
        }
        printf("NULL\n");
    }
}
void search()
{
    if (head == NULL)
    {
        printf("Stack is empty !\n");
    }
    else
    {
        int pos = 0;
        char word[50];
        printf("Enter the data you want to search : ");
        scanf("%s", word);
        struct node *i = head;
        while (i != NULL && strcmp(i->Book, word) != 0)
        {
            i = i->next;
            pos++;
        }
        if (i == NULL)
        {
            printf("There's no such data !\n");
        }
        else
        {
            printf("Element is found at %d position\n", pos);
        }
    }
}
int main()
{
    push("Aronnok");
    push("Prothom Alo");
    push("Purbo Poshchim");
    traverse();
    pop();
    traverse();
    search();

    return 0;
}