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
void search(){
    if(head== NULL){
        printf("Stack is empty\n");
    } else{
        int x;
        printf("Enter the data you want to search : ");
        scanf("%d",&x);
        struct node *i=head;
        int pos=0;
        while(i != NULL && i->data != x){
            i=i->next;
            pos++;
        }
        if(i==NULL){
            printf("Not Found !\n");
        } else{
            printf("Found at %d position.\n",pos);
        }
    }
}
int main(){
    stackcreation();
    traverse();
    search();
    return 0;
}