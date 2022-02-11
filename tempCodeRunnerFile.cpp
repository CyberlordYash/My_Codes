#include<iostream>
using namespace std;
int main()
{
    int t,n,count0,count1,count[100];char s[100];
    cin>>t;
    for(int i=0;i<t;i++)
    {   temp=0;count1=0;count0=0;
        cin>>n;
        cin>>s;
        for(int j=0;j<n;j++)
        {
            if(s[j]=='0')count0++;
            if(s[j]=='1')count1++;
        }
        
        if(count1==count0)count[i]=count1-1;
        if(count1>count0)count[i]=count0-1;
        if(count1<count0)count[i]=count1-1;
        if(count[i]<0)count[i]=0;
        }

        for(int i=0;i<t;i++)
        {
            cout<<count[i];
        }
}