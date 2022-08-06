#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
} * root;

struct node *create()
{
    struct node *newnode;
    int data;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter data or -1 to stop");
    scanf("%d", &data);
    if (data == -1)
        return 0;

    newnode->data = data;
    printf("\nEnter left child");
    newnode->lchild = create();
    printf("\nenter right child :");
    newnode->rchild = create();

    return newnode;
}
void inorder(struct node *temp)
{
    if (temp != NULL)
    { inorder(temp->lchild);
        printf("%d", temp->data);
       
        inorder(temp->rchild);
    }
   
}

void preorder(struct node *temp)
{
    if (temp != NULL)
    {
        printf("%d", temp->data);
        preorder(temp->lchild);
        preorder(temp->rchild);
    }
   
}

void postorder(struct node *temp)
{
    if (temp != NULL)
    {
        printf("%d", temp->data);
        postorder(temp->lchild);
        postorder(temp->rchild);
    }
   
}
int main()
{
    root = create();
    inorder(root);
}