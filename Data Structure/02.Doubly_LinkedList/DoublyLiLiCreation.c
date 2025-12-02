// Create a doubly linked list with character array and float type data :
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node{
    char str[50];
    float data;
    struct Node *pre;
    struct Node *next;
};
struct Node *head=NULL;
void print(){
    struct Node *i=head;
    while(i != NULL){
        printf("%s %.2f ->",i->str,i->data);
        i=i->next;
    }
    printf("NULL\n");
}
void LinkedListCreation(){
    struct Node *s1,*s2,*s3;
    s1=(struct Node*)malloc(sizeof(struct Node));
    s2=(struct Node*)malloc(sizeof(struct Node));
    s3=(struct Node*)malloc(sizeof(struct Node));
    strcpy(s1->str,"Mahadi");
    strcpy(s2->str,"Rahman");
    strcpy(s3->str,"Jihad");
    s1->data=10;
    s2->data=20;
    s3->data=30;
    s1->pre=NULL;
    s2->pre=s1;
    s3->pre=s2;
    s1->next=s2;
    s2->next=s3;
    s3->next=NULL;
    head=s1;
}
int main(){
    LinkedListCreation();
    print();

    return 0;
}