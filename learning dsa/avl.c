#include <stdio.h>
#include <stdlib.h>
struct node
{
    int key;
    struct node *left, *right;
};
// Create a node
struct node *newNode(int item)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
// preoder Traversal
void preorder(struct node *t)
{
    if (t != NULL)
    {
        printf("%d -> ", t->key);
        preorder(t->left);
        preorder(t->right);
    }
}
// Inoder Traversal
void inorder(struct node *t)
{
    if (t != NULL)
    {
        inorder(t->left);
        printf("%d -> ", t->key);
        inorder(t->right);
    }
}
// Find the inorder successor
struct node *minValueNode(struct node *node)
{
    struct node *current = node;
    // Find the leftmost leaf
    while (current && current->left != NULL)
        current = current->left;
    return current;
}
// Deleting a node
struct node *deleteNode(struct node *root, int key)
{
    // Return if the tree is empty
    if (root == NULL)
        return root;
    // Find the node to be deleted
    if (key < root->key)
        root->left = deleteNode(root->left, key);
    else if (key > root->key)
        root->right = deleteNode(root->right, key);
    else
    {
        // If the node is with only one child or no child
        if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }
        // If the node has two children
        struct node *temp = minValueNode(root->right);
        // Place the inorder successor in position of the node to be deleted
        root->key = temp->key;
        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->key);
    }
    return root;
}
// Sub function for height()
int height(struct node *t)
{
    if (!t)
        return 0;
    if (!(t->left) && !(t->right)) // --> assume leaf node is at height 1
        return 1;
    int l, r;
    l = height(t->left);
    r = height(t->right);
    int p = l > r ? l : r;
    return (1 + (p));
}
// Sub function for diff()
int diff(struct node *t)
{
    int left = height(t->left);
    int right = height(t->right);
    int difference;
    difference = left - right;
    return difference;
}
// Sub function for LL_Rotation
struct node *LL_Rotation(struct node *t)
{
    struct node *curr;
    curr = t->left;
    t->left = curr->right;
    curr->right = t;
    return curr;
}
// Sub function for RR_Rotation
struct node *RR_Rotation(struct node *t)
{
    struct node *curr;
    curr = t->right;
    t->right = curr->left;
    curr->left = t;
    return curr;
}
// Sub function for RL_Rotation
struct node *RL_Rotation(struct node *t)
{
    t->right = LL_Rotation(t->right);
    t = RR_Rotation(t);
    return t;
}
// Sub function for lR_Rotation
struct node *LR_Rotation(struct node *t)
{
    t->left = RR_Rotation(t->left);
    t = LL_Rotation(t);
    return t;
}
// calculating balanceing factor
struct node *balance(struct node *curr)
{
    int getbalance = diff(curr);
    if (getbalance > 1)
    {
        if (diff(curr->left) > 0)
            curr = LL_Rotation(curr);
        else
            curr = LR_Rotation(curr);
    }
    else if (getbalance < -1)
    {
        if (diff(curr->right) > 0)
            curr = RL_Rotation(curr);
        else
            curr = RR_Rotation(curr);
    }
    return curr;
}
// Insert a node
struct node *insert(struct node *curr, int key)
{
    // Return a new node if the tree is empty
    if (curr == NULL)
        return newNode(key);
    // Traverse to the right place and insert the node
    if (key < curr->key)
    {
        curr->left = insert(curr->left, key);
    }
    else
    {
        curr->right = insert(curr->right, key);
    }
    curr = balance(curr);
    return curr;
}
// Driver code
int main()
{
    struct node *root = NULL;
    root = insert(root, 3);
    root = insert(root, 2);
    root = insert(root, 1);
    root = insert(root, 6);
    root = insert(root, 7);
    root = insert(root, 10);
    root = insert(root, 14);
    root = insert(root, 4);
    printf("Inorder traversal: ");
    printf("\n");
    inorder(root);
    printf("\n");
    printf("pre-order traversal: ");
    printf("\n");
    preorder(root);
    printf("\n");
    printf("\nAfter deleting 10\n");
    root = deleteNode(root, 10);
    printf("Inorder traversal: ");
    inorder(root);
}
