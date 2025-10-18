#include<stdio.h>
#include<stdlib.h>
struct student{
    int data;
    struct student *next;
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
    printf("Enter Data : ");
    scanf("%d",&x);
    struct student *newnode;
    newnode=(struct student*)malloc(sizeof(struct student));
    newnode->data=x;
    newnode->next=NULL;
    if(head == NULL){
        head=newnode;
    } else{
        struct student *i=head;
        while(i->next != NULL){
            i=i->next;
        }
        i->next=newnode;
    }
}
void deleteFirst(){
    if(head==NULL){
        printf("There's nothing to delete");
    } else{
        struct student *i=head;
        head=head->next;
        free(i);
        
    }
    
}
int main(){
    createNewnode();
    print();
    createNewnode();
    print();
    createNewnode();
    print();
    deleteFirst();
    print();
    deleteFirst();
    print();
    deleteFirst();
    print();
    deleteFirst();
    print();

return 0;
}
