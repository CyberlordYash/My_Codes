#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
} * head;
void createnode()
{
    int data;
    printf("Enter data or 0 to stop");
    scanf("%d", &data);
    head = (struct node *)malloc(sizeof(struct node));
    head->data = data;
    head->next = NULL;
    head->prev = NULL;
    struct node *temp;
    temp=head;
    while (data != 0)
    {
        
        printf("Enter data or 0 to stop");
        scanf("%d", &data);
        if (data == 0)
            break;
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = data;
        newnode->next = NULL;
        newnode->prev = temp;
        temp->next = newnode;
        temp = temp->next;
    }
}
void traverse()
{
    struct node *temp = head;
    while (temp)
    {
        printf("%d", temp->data);
        temp = temp->next;
    }
}
void traverseback()
{
    struct node *temp=head;
    while(temp->next){
        temp=temp->next;

    }
    while(temp)
    {
        printf("%d",temp->data);
        temp=temp->prev;
    }
}
int main()
{
    createnode();
    traverse();
    traverseback();
}