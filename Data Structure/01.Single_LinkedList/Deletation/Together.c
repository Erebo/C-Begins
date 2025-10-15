#include<stdio.h>
#include<stdlib.h>
struct student{
    int data;
    struct student  *next;
};
struct student *head=NULL;
void print(){
    struct student *i=head;
    while(i != NULL){
        printf("%d->",i->data);
        i=i->next;
    }
    printf("NULL\n");
}           
void createNewnode(){
    int x;
    printf("Enter Data :");
    scanf("%d",&x);
    struct student *newnode;
    newnode=(struct student*)malloc(sizeof(struct student));
    newnode->data=x;
    newnode->next=NULL;
    if(head == NULL){
        head=newnode;
    } else {
        struct student *i=head;
    while(i->next != NULL){
        i=i->next;
    }
    i->next=newnode;
    }

}
void deleteFirst(){
    if(head == NULL){
        printf("There's no element to delete");
    } else if(head->next ==NULL){
        head=NULL;
    } else{
        head=head->next;
    }
}
void deleteLast(){
    if(head==NULL){
        printf("There's no element to delete");
    } else if(head->next==NULL){
        head=NULL;
    } else{
        struct student *i=head;
        while(i->next->next != NULL){
            i=i->next;
        }
        i->next=NULL;
    }
}
void deleteAny(){
    int x;
    printf("Enter which data you want to delete :");
    scanf("%d",&x);
    struct student *newnode;
    struct student *i=head;
    if(head == NULL){
        printf("There's no element to delete");
    }
    else if(head->data=x){
        head=head->next;
    } else{
    while(i->next->data != x){
        i=i->next;
    }
    i->next=i->next->next;
}
}
int main(){
    createNewnode();
    createNewnode();
    createNewnode();
    createNewnode();
    createNewnode();
    createNewnode();
    print();
    deleteFirst();
    print();
    deleteLast();
    print();
    deleteAny();
    print();
}
