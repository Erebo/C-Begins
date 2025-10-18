// 18.Oct.25
// Lab evaluation DS - 01 by Jakaria Sir
// Create a linked list with character array and the insert a newnode after a specific array.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Node
{
    char data[50];
    float data2;
    struct Node *next;
};
struct Node *head = NULL;
void print()
{
    struct Node *i = head;
    while (i != NULL)
    {
        printf("%s %.2f->", i->data, i->data2);
        i = i->next;
    }
    printf("NULL\n");
}
void LinkedListCreation()
{
    struct Node *s1, *s2, *s3;
    s1 = (struct Node *)malloc(sizeof(struct Node));
    s2 = (struct Node *)malloc(sizeof(struct Node));
    s3 = (struct Node *)malloc(sizeof(struct Node));
    strcpy(s1->data, "ABC");
    strcpy(s2->data, "XYZ");
    strcpy(s3->data, "PQR");
    s1->data2 = 10;
    s2->data2 = 20;
    s3->data2 = 30;
    s1->next = s2;
    s2->next = s3;
    s3->next = NULL;
    head = s1;
}
void newnodeInsertion()
{
    char data[50];
    float data2;
    struct Node *newnode;
    newnode = (struct Node *)malloc(sizeof(struct Node));
    strcpy(newnode->data, "mnp");
    newnode->data2 = 40;
    newnode->next = NULL;
    struct Node *i = head;
    while (i != NULL && strcmp(i->data, "XYZ") != 0)
    {
        i = i->next;
    }
    newnode->next = i->next;
    i->next = newnode;
}
int main()
{
    LinkedListCreation();
    printf("Given linked list : \n");
    print();
    newnodeInsertion();
    printf("After adding the newnode : \n");
    print();
}