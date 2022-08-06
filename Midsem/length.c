#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    
}*head;


void createnode(int n){
    head=(struct node* )malloc(sizeof(struct node));
    int d;
    printf("Enter data\n");
    scanf("%d",&d);
    printf("%d",d);
     struct node *temp=(struct node* )malloc(sizeof(struct node));
      temp=head;
    head->data=d;
    head->next=NULL;
     
     
   
    for(int i=0;i<n-1;i++)
    {
        
        struct node *newnode=(struct node* )malloc(sizeof(struct node));
        printf("Enter data");
        scanf("%d",&d);
        newnode->data=d;
        temp->next=newnode;
       newnode->next=NULL;
        temp=temp->next;
    }


}
void insert(){
    int n=2;

    struct node *temp=(struct node*)malloc(sizeof(struct node));
    struct node *temp2=(struct node*)malloc(sizeof(struct node));
    temp=head;

    int count=0,d;
    while(count<=2){
        count++;
        if(count==2){
            struct node *newnode=(struct node* )malloc(sizeof(struct node));
        printf("Enter data");
        scanf("%d",&d);
        newnode->data=d;
        temp2=temp->next;
        temp->next=newnode;
        newnode->next=temp2;
        }
    }
    temp=temp->next;
}
void print(){
    struct node* temp=(struct node* )malloc(sizeof(struct node*));
    temp=head;
    while(temp){
    
    printf("%d   ",temp->data);
    temp=temp->next;
    }
}

int main(){

createnode(5);
print();
insert();
print();
}