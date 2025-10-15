#include<stdio.h>
#include<stdlib.h>
struct student{
    int data;
    struct student*next;
};
struct student *start=NULL;
void print(){
    struct student *i=start;
    while(i!=NULL){
        printf("%d->",i->data);
        i=i->next;
    }
    printf("NULL\n");
}
void createNewnode(){
    int x;
    printf("Enter the data : ");
    scanf("%d",&x);
    struct student *newnode;
    newnode=(struct student*)malloc(sizeof(struct student));
    newnode->data=x;
    newnode->next=NULL;
    if(start == NULL){
        start=newnode;
    } else{
        struct student *i=start;
        while(i->next != NULL){
            i=i->next;
        }
        i->next=newnode;
    }
}
void insertEnd(){
    int x;
    printf("Enter the data to insert in the end : ");
    scanf("%d",&x);
    struct student *newnode;
    newnode=(struct student*)malloc(sizeof(struct student));
    newnode->data=x;
    newnode->next=NULL;
    if(start == NULL){
        start=newnode;
    } else{
        struct student *i=start;
        while(i->next != NULL){
            i=i->next;
        }
        i=i->next=newnode;
    }

}
int main(){
    createNewnode();
    print();
    createNewnode();
    print();
    createNewnode();
    print();
    createNewnode();
    print();
    insertEnd();
    print();

return 0;
}
