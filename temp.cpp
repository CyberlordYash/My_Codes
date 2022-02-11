#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j<n-i)cout<<" ";
            else cout<<"*";
        }
        for(int j=0;j<n;j++)
        {
            if(j<i-1)cout<<"*";
        }

        cout<<endl;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j>i+1)cout<<"*";
            else cout<<" ";
        }
        for(int j=0;j<n;j++)
        {
            if(j<n-i-3)cout<<"*";
        }
        cout<<endl;
    }

}