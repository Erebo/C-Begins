#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Node
{
    char word[50];
    int data;
    float cgpa;
    struct Node *next, *pre;
};
struct Node *head = NULL;
void print()
{
    struct Node *i = head;
    while (i != NULL)
    {
        printf("%s-%d-%.2f ->", i->word, i->data, i->cgpa);
        i = i->next;
    }
    printf("NULL\n");
}
void LinkedListCreation()
{
    struct Node *s1, *s2, *s3, *s4;
    s1 = (struct Node *)malloc(sizeof(struct Node));
    s2 = (struct Node *)malloc(sizeof(struct Node));
    s3 = (struct Node *)malloc(sizeof(struct Node));
    s4 = (struct Node *)malloc(sizeof(struct Node));
    strcpy(s1->word, "ABCD");
    strcpy(s2->word, "EFGH");
    strcpy(s3->word, "IJKL");
    strcpy(s4->word, "MNOP");
    s1->data = 1;
    s2->data = 2;
    s3->data = 3;
    s4->data = 4;
    s1->cgpa = 3.9;
    s2->cgpa = 3.8;
    s3->cgpa = 3.7;
    s4->cgpa = 3.6;
    s1->pre = NULL;
    s2->pre = s1;
    s3->pre = s2;
    s4->pre = s3;
    s1->next = s2;
    s2->next = s3;
    s3->next = s4;
    s4->next = NULL;
    head = s1;
}
void insertFirst()
{
    struct Node *newnode;
    newnode = (struct Node *)malloc(sizeof(struct Node));
    strcpy(newnode->word, "WXYZ");
    newnode->data = 5;
    newnode->cgpa = 4.00;
    newnode->pre = NULL;
    newnode->next = NULL;
    struct Node *i = head;
    while (i->next != NULL && strcmp(i->word, "ABCD") != 0)
    {
        i = i->next;
    }
    newnode->next=head;
    head=newnode;
}
int main()
{
    LinkedListCreation();
    print();
    insertFirst();
    print();
}