// Peak is basically the top of the stack . 
// In stack the top of the stack is the data with next part as NULL. 
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node *head=NULL;
void traverse(){
    if(head==NULL){
        printf("Stack is empty\n");
    } else{
        struct node*i=head;
        while(i != NULL){
            printf("%d->",i->data);
            i=i->next;
        }
        printf("NULL\n");
    }
}
void stackcreation(){
    struct node*s1,*s2,*s3;
    s1=(struct node*)malloc(sizeof(struct node));
    s2=(struct node*)malloc(sizeof(struct node));
    s3=(struct node*)malloc(sizeof(struct node));
    s1->data=10;
    s2->data=20;
    s3->data=30;
    s1->next=s2;
    s2->next=s3;
    s3->next=NULL;
    head=s1;
}
void empty(){
    if(head== NULL){
        printf("Stack is empty\n");
    } else{
        printf("Stack is not empty.\n");
    }
}
void peak(){
    if(head==NULL){
        printf("Stack is empty !\n");
    } else{
        struct node *i=head;
        while(i->next != NULL){
            i=i->next;
        }
        printf("Peak of this stack is %d",i->data);
    }
}
int main(){
    stackcreation();
    empty();
    peak();
    return 0;
}