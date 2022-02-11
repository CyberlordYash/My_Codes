#include<iostream>
using namespace std;
int main()
{
    int n,a=0,b=1,c;
    cout<<"Enter how many digits you want :";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        
        cout<<c<<"  ";
        

    }
} 