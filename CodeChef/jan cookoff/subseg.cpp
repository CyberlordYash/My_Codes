#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,temp=3;
        cin>>n;
        for(int i=0;i<n;i++)
        {   
            cout<<temp<<" ";
            if(temp%2==0)temp=temp+3;
            else
            temp--;


        }
        cout<<"\n";

    }

}