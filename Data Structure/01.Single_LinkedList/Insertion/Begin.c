#include<stdio.h>
#include<stdlib.h>
struct student{
    int data;
    struct student *next;
};
struct student *start=NULL;
void print(){
    struct student *i=start;
    while(i != NULL){
        printf("%d->",i->data);
        i=i->next;
    }
        printf("NULL\n");
}
void insertBegin(){
    int x;
    printf("Enter data to insert at the beginning :");
    scanf("%d",&x);
    struct student *newnode;
    newnode=(struct student*)malloc(sizeof(struct student));
    newnode->data=x;
    newnode->next=NULL;
    newnode->next=start;//main two lines
    start=newnode;//main two lines
}
int main(){
    insertBegin();
    print();
    insertBegin();
    print();
    insertBegin();
    print();
    insertBegin();
    print();

    return 0;
}
