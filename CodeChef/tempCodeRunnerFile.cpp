#include<iostream>
using namespace std;
int main()
{
    int t,n,a,count=0,temp1=0,num;
    cin>>t;
    for(int i=0;i<t;i++)
    {   cin>>n;
    if(n<=3)num=n;
    else {
    a=n-1;
    while(a)
    {   count=0;
        if(n%a==0){ temp=a;
        while(temp){
            if(a%temp==0)count++;
            temp--;
            
        }
        if(count>=temp1){
        temp1=count;
        num=a;
        
        }

    }
        a--;
    }
    }
    cout<<num<<endl;


    }

}