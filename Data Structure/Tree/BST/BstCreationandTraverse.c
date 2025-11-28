#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createnode(int x){
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
struct node *createBST(struct node*root,int x){
    if(root==NULL){
        return createnode(x);
    } else{
        if(x>root->data){
            root->right=createBST(root->right,x);
        } else if(x<root->data){
            root->left=createBST(root->left,x);
        }
        else{
            return root;
        }
    } 
    return root ;
}
void InoderPrint(struct node *root){
    if(root==NULL){
        return ;
    } else{
        InoderPrint(root->left);
        printf("%d->",root->data);
        InoderPrint(root->right);
    }
}
int main(){
    struct node *root = NULL;
    root=createBST(root,10);
    createBST(root,20);
    createBST(root,3);
    createBST(root,5);
    createBST(root,2);
    createBST(root,1);
    createBST(root,7);
    createBST(root,30);
    createBST(root,40);
    createBST(root,1);
    createBST(root,2);
    InoderPrint(root);
    return 0;
}