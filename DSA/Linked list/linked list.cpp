#include<iostream>
using namespace std;
class node
{   public:
    int data;
    node *next;
    node(int a)
    {
        data=a;
        next=NULL;}
    node *getdata()
    {
        int data;node *head=NULL,*temp;
        cin>>data;
        while(data!=0){
        node *n=new node(data);
        if(head==NULL){head=n;temp=head;}
        else{
            temp->next=n;
        }
        cin>>data;
    }
};

int main()
{

}