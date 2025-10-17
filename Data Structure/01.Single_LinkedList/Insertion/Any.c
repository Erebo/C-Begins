#include <stdio.h>
#include <stdlib.h>
struct student
{
    int data;
    struct student *next;
};
struct student *start = NULL;
void print()
{
    struct student *i = start;
    while (i != NULL)
    {
        printf("%d->", i->data);
        i = i->next;
    }
    printf("NULL\n");
}
void createNewnode()
{
    int x;
    printf("Enter data : ");
    scanf("%d", &x);
    struct student *newnode;
    newnode = (struct student *)malloc(sizeof(struct student));
    newnode->data = x;
    newnode->next = NULL;
    if (start == NULL)
    {
        start = newnode;
    }
    else
    {
        struct student *i = start;
        while (i->next != NULL)
        {
            i = i->next;
        }
        i->next = newnode;
    }
} // In the insert Any section i need to implement two edge cases (1) What if there is no such element after which i want to insert . 
// Second one is what if the insertAny is the first element of the node !
void insertAny(){
    int x,pos;
    printf("Enter the new data :");
    scanf("%d",&x);
    printf("Eneter the element after which you want to insert the new data :");
    scanf("%d",&pos);
    struct student *newnode;
    newnode=(struct student*)malloc(sizeof(struct student));
    newnode->data=x;
    newnode->next=NULL;
    struct student *i=start;
    while(i->data != pos){
        i=i->next;
    }
    newnode->next=i->next;//main two changes
    i->next=newnode;//main two changes 
    
}
int main()
{
    createNewnode();
    print();
    createNewnode();
    print();
    createNewnode();
    print();
    createNewnode();
    print();
    createNewnode();
    print(); 
    insertAny();
    print();

    return 0;
}
