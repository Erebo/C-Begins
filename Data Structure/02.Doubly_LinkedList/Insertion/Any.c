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
void insertAny()
{
    char word1[50];
    printf("Enter the characters for the newnode :");
    scanf("%s", word1);
    float num;
    printf("Enter the data for newnode : ");
    scanf("%f", &num);
    char target[50];
    printf("Enter the data after which you want to insert : ");
    scanf("%s", target);
    struct Node *newnode;
    newnode = (struct Node *)malloc(sizeof(struct Node));
    strcpy(newnode->word, word1);
    newnode->data = num;
    newnode->pre = NULL;
    newnode->next = NULL;

    struct Node *i = head;
    while (i != NULL && strcmp(i->word, target) != 0)
    {
        i = i->next;
    }
    if (i == NULL)
    {
        printf("There's no such data !\n");
    }
    newnode->pre = i;
    newnode->next = i->next;
    if (i->next != NULL)
        i->next->pre = newnode;
    else
    {
        tail = newnode;
    }
    i->next = newnode;
}
int main()
{
    LinkedlistCreation();
    straightprint();
    reverseprint();
    straightprint();
    insertAny();
    straightprint();
    reverseprint();
}