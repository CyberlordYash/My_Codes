#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    
}*head;


void createnode(int n){
    int d;
    printf("Enter data");
    scanf("%d",&d);
    head->data=d;
    head->next=NULL;
    printf("Enter data");