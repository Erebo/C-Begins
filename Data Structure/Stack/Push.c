#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void print()
{
    if (head == NULL)
    {
        printf("The stack is empty\n");
    }
    else
    {
        struct node *i = head;
        while (i != NULL)
        {
            printf("%d->", i->data);
            i = i->next;
        }
        printf("NULL\n");
    }
}
void push(int x)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
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
int main()
{
    push(10);
    push(6);
    push(7);
    pop();
    push(11);
    pop();
    pop();
    push(10);
    print();

    return 0;
}