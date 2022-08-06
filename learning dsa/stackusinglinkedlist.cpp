#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *top = NULL;

void push(int data)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = top;
    top = temp;
}

void pop()
{
    struct node *temp;
    temp = top;
    top = top->next;
    free(temp);
}
void display()
{
    struct node *temp;
    temp = top;
    while (temp)
    {
        printf("%d", temp->data);
        temp = temp->next;
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    pop();
    display();
    
}