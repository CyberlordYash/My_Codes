#include<iostream>
using namespace std;
int main()
{
    int n,k,a[100],sum,temp=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>k;
    for(int i=0;i<n;i++)
    {sum=0;
        for(int j=i;j<n;j++)
        {   
            sum=sum+a[j];
            if(sum==k){temp=1;goto anushruta;}
        }
    }
    anushruta:
    if(temp==1)cout<<"1";
    else cout<<"0";


}