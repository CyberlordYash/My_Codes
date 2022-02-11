#include<iostream>
using namespace std;
class node
{   public:
    int data;
    node *next=NULL;
};
node *getdata()
{   int d=1;
cout<<"enter data press 0 to stop\n";
    cin>>d;node*head=NULL,*temp;
    
    
    while(d!=0)
    {   
        node *n=new node;
        n->data=d;
        
        if(head==NULL){head=n;temp=head;}
        else{
            temp->next=n;
            temp=temp->next;
        }
        cin>>d;
        
    }
    return head;
}
void printdata(node *head)
{   cout<<"Your linked list is\n";
    while(head!=NULL)
    {
        cout<<head->data<<endl;
        head=head->next;
    }
}
void change(int i,node *head,node *node2)
{   node *temp=head;int count=0;
    while(count<i)
    {
        temp=temp->next;
    }
    temp->next=node2;
    temp=temp->next;
    node2->next=temp;

}



int main()
{   node *temp;int data,i;
    temp=getdata();
    printdata(temp);
   
    node *d=new node;
    cout<<"enter new data";
    cin>>data;
    cout<<"Index";
    cin>>i;
    d->data=data;
    
 change(i,temp,d);
 printdata(temp);


}