#include <stdio.h>
#include <stdlib.h>
struct Node
{
    float A;
    char B;
    struct Node *C;
};
void print(struct Node *P)
{ 
    while(P != NULL){
    printf("%.2f %c->", P->A, P->B);
    P = P->C;
}
    printf("NULL\n");
    
}

int main()
{
    struct Node *n1, *n2, *n3,*Head;
    n1 = (struct Node *)malloc(sizeof(struct Node ));
    n2 = (struct Node *)malloc(sizeof(struct Node ));
    n3 = (struct Node *)malloc(sizeof(struct Node ));
    //Head = (struct Node*)malloc(sizeof(struct Node));Head is just a pointer so no need to allocate memory for it . 
    n1->A = 1;
    n2->A = 2;
    n3->A = 3.0;
    n1->B = 'A';
    n2->B = 'B';
    n3->B = 'C';
    n1->C = n2;
    n2->C = n3;
    n3->C = NULL;
    Head = n1;
    print(Head);
    return 0;
}
//
