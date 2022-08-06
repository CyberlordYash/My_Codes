// creating 2 linked list meriging them and then sorting
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} * head1, *head2;

void createnode1()
{
    int data;
    head1 = (struct node *)malloc(sizeof(struct node *));
    struct node *temp;
    printf("Enter data for node or 0 to stop: ");
    scanf("%d", &data);
    head1->data = data;
    head1->next = NULL;
    temp = head1;
    while (temp)
    {
        printf("Enter data for node or 0 to stop: ");
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

void createnode2()
{
    int data;
    head2 = (struct node *)malloc(sizeof(struct node *));
    struct node *temp;
    printf("Enter data for node or 0 to stop: ");
    scanf("%d", &data);
    head2->data = data;
    head2->next = NULL;
    temp = head2;
    while (temp)
    {
        printf("Enter data for node or 0 to stop: ");
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

void traverse(struct node *headtemp)
{
    struct node *temp = headtemp;
    while (temp)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

void merge()
{
    struct node *temp1;
    temp1 = head1;
    while (temp1->next != NULL)
    {
        temp1 = temp1->next;
    }
    temp1->next = head2;
}

void sort()
{
    // bubble sort algo use kar rha hu
    struct node *temp = head1;
    int size = 1, p;
    while (temp->next)
    {
        temp = temp->next;
        size++;
    }
    temp = head1;

    for (int i = 0; i < size - 1; i++)
    {

        for (int j = 0; j < size - i - 1; j++)
        {
            if (temp->data > temp->next->data)
            {
                p = temp->data;
                temp->data = temp->next->data;
                temp->next->data = p;
            }
            temp = temp->next;
        }
        temp = head1;
    }
}

void reverse()
{
    struct node *temp = head1, *curr = head1, *prev = NULL;
    while (curr)
    {
        temp = temp->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    head1 = prev;
}
int main()
{
    createnode1();
    // createnode2();
    printf("first linked list:\n");
    traverse(head1);
    reverse();
    printf("reversed linked list:\n");
    traverse(head1);

    // printf("\nsecond list is :\n");
    // traverse(head2);
    // merge();
    // printf("\nfirst and second merged linked list:\n");
    // traverse(head1);
    // sort();
    // printf("\nsorting in ascending order :\n");
    // traverse(head1);
}