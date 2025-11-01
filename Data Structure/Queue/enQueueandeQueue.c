#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void enQueue(int x)
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
void deQueue()
{
    if (head == NULL)
    {
        printf("Queue is empty !\n");
    }
    else
    {
        if (head->next == NULL)
        {   free(head);
            head = NULL;
        }
        else
        {   
            struct node*temp=head; 
            head = head->next;
            free(temp);
        }
    }
}
void print()
{
    if (head == NULL)
    {
        printf("Queue is empty !\n");
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
int main()
{
    enQueue(10);
    enQueue(6);
    enQueue(7);
    deQueue();
    deQueue();
    deQueue();
    enQueue(10);
    print();
    return 0;
}