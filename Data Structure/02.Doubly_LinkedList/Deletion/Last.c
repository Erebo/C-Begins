#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node{
    char word[50];
    int id;
    float cgpa;
    struct Node *next,*pre;
};
struct Node *head=NULL;
struct Node *tail=NULL;
void straightprint(){
    struct Node*i=head;
    while(i != NULL){
        printf("%s-%d-%.2f->",i->word,i->id,i->cgpa);
        i=i->next;
    }
    printf("NULL\n");
}
void reverseprint(){
    struct Node *i=tail;
    while(i != NULL){
    printf("%s-%d-%.2f->",i->word,i->id,i->cgpa);
    i=i->pre;  
    }
    printf("NULL\n");
}
void deleteLast(){
    struct Node *i=head;
    while(i->next->next  != NULL){
        i=i->next;
    }
    i->next=NULL;
}
void createLinkedList(){
    struct Node *s1,*s2,*s3,*s4;
    s1=(struct Node*)malloc(sizeof(struct Node));
    s2=(struct Node*)malloc(sizeof(struct Node));
    s3=(struct Node*)malloc(sizeof(struct Node));
    s4=(struct Node*)malloc(sizeof(struct Node));
    strcpy(s1->word,"AAA");
    strcpy(s2->word,"BBB");
    strcpy(s3->word,"CCC");
    strcpy(s4->word,"DDD");
    s1->id=001;
    s2->id=002;
    s3->id=003;
    s4->id=004;
    s1->cgpa=4.00;
    s2->cgpa=3.9;
    s3->cgpa=3.8;
    s4->cgpa=3.7;
    s1->pre=NULL;
    s2->pre=s1;
    s3->pre=s2;
    s4->pre=s3;
    s1->next=s2;
    s2->next=s3;
    s3->next=s4;
    s4->next=NULL;
    head=s1;
    tail=s4;

}
int main(){
    createLinkedList();
    straightprint();
    reverseprint();
    deleteLast();
    straightprint();
    reverseprint();
} 