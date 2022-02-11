#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,fin=0;char a[2000000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        if(a[i]=='U'){sum=sum+1;}
        else if(a[i]=='D'){sum=sum-1;}
        if(sum==0){
            if(a[i]=='U')fin=fin+1;
        }
    cout<<fin;
    }
    cout<<fin;
    
}