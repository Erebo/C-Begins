// Create a Doubly LiLi & then insert a node at any position .
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Node
{
    char word[50];
    float data;
    struct Node *next, *pre;
};
struct Node *head = NULL;
struct Node *tail = NULL;
void straightprint()
{
    struct Node *i = head;
    while (i != NULL)
    {
        printf("%s-%.2f->", i->word, i->data);
        i = i->next;
    }
    printf("NULL\n");
}
void reverseprint()
{
    struct Node *i = tail;
    while (i != NULL)
    {
        printf("%s-%.2f->", i->word, i->data);
        i = i->pre;
    }
    printf("NULL\n");
}
void LinkedlistCreation()
{
    struct Node *s1, *s2, *s3;
    s1 = (struct Node *)malloc(sizeof(struct Node));
    s2 = (struct Node *)malloc(sizeof(struct Node));
    s3 = (struct Node *)malloc(sizeof(struct Node));
    strcpy(s1->word, "ABC");
    strcpy(s2->word, "XYZ");
    strcpy(s3->word, "PQR");
    s1->data = 10;
    s2->data = 20;
    s3->data = 30;
    s1->pre = NULL;
    s2->pre = s1;
    s3->pre = s2;
    s1->next = s2;
    s2->next = s3;
    s3->next = NULL;
    head = s1;
    tail = s3;
}
void insertNewnode()
{
    struct Node *newnode;
    newnode = (struct Node *)malloc(sizeof(struct Node));
    strcpy(newnode->word, "MNP");
    newnode->data = 30.01;
    newnode->pre = NULL;
    newnode->next = NULL;
    struct Node *i = head;
    while (i != NULL && strcmp(i->word, "XYZ") != 0)
    {
        i = i->next;
    }
    newnode->pre = i;
    newnode->next = i->next;
    i->next->pre = newnode;
    i->next = newnode;
}
int main()
{
    LinkedlistCreation();
    straightprint();
    reverseprint();
    insertNewnode();
    straightprint();
    reverseprint();
}