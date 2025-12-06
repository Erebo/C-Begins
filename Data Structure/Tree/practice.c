#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *left,*right;
};
struct node *createnode(int x){
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
struct node *createBST(struct node *root,int x){
    if(root==NULL){
        return createnode(x);
    } 
    if(x>root->data){
        root->right=createBST(root->right,x);
    } else if(x<root->data){
        root->left=createBST(root->left,x);
    } 
        return root;
    
}
void printInoder(struct node *root){
    if(root==NULL){
        return ;
    } else{
        printInoder(root->left);
        printf("%d->",root->data);
        printInoder(root->right);
    }
}
struct node *findmin(struct node *root){
    while(root->left != NULL){
        root=root->left;
    }
    return root;
}
struct node *deleteBST(struct node *root,int x){
    if(root==NULL){
        return root;
    } 
    if(x>root->data){
        root->right=deleteBST(root->right,x);
    } else if(x<root->data){
        root->left=deleteBST(root->left,x);
    } else{
        if(root->left==NULL){
            struct node *temp=root->right;
            free(root);
            return temp;
        } else if (root->right==NULL){
            struct node *temp=root->left;
            free(root);
            return temp;
        } else{
            struct node *temp=findmin(root->right);
            root->data=temp->data;
            root->right=deleteBST(root->right,temp->data);
        }
    }
        return root;
}
int main(){
    struct node *root=NULL;
    root=createBST(root,5);
    createBST(root,3);
    createBST(root,10);
    createBST(root,1);
    createBST(root,7);
    createBST(root,12);
    printInoder(root);
    printf("\n");
    deleteBST(root,10);
    printInoder(root);
    return 0;
}