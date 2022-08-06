#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} * head;

void createnode()
{
    int data;
    printf("Enter data or 0 to stop:");
    scanf("%d", &data);
    head = (struct node *)malloc(sizeof(struct node));
    head->data = data;
    head->next = NULL;
    struct node *temp;
    temp = head;
    while (data)
    {
        printf("Enter data or 0 to stop:");
        scanf("%d", &data);
        if (data == 0)
            break;
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = data;
        newnode->next = NULL;
        temp->next = newnode;
        temp = temp->next;
    }
}
void traverse()
{
    struct node *temp1;

    temp1 = head;

    while (temp1)
    {
        printf("%d", temp1->data);
        temp1 = temp1->next;
    }
}

void duplicate()
{
    struct node *temp1 = head, *temp2=head->next,prev;
    while (temp1->next)
    {
        if(temp1->data==temp2->data)
        {
            temp1->next=temp2->next;
        temp2=temp2->next;
        }
       else{
        temp1=temp1->next;
        temp2=temp2->next;
       }
    }
}
int main()
{
    createnode();
    traverse();
    printf("duplicates removed:\n");
    duplicate();
    
    traverse();
}
