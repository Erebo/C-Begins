#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left, *right;
};

struct node *createNode(int x)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}
void printInoder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        printInoder(root->left);
        printf("%d->", root->data);
        printInoder(root->right);
    }
}
void printPreoder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        printf("%d->", root->data);
        printPreoder(root->left);
        printPreoder(root->right);
    }
}
void printPostoder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        printPostoder(root->left);
        printPostoder(root->right);
        printf("%d->", root->data);
    }
}

int main()
{
    struct node *root = createNode(10);
    root->left = createNode(20);
    root->right = createNode(30);
    root->left->left = createNode(40);
    root->left->right = createNode(50);
    printf("Pre Oder: ");
    printPreoder(root);
    printf("\n");
    printf("In Oder: ");
    printInoder(root);
    printf("\n");
    printf("Post Oder: ");
    printPostoder(root);
    printf("\n");

    return 0;
}