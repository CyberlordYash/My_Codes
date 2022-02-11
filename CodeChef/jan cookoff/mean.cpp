#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;int a[10000];float p,q,sum;
    cin>>t;
    while(t--)
    {   sum=0;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
       
        for(int i=0;i<n-1;i++)
        {
            sum=sum+a[i];
        }
        p=a[n-1];
        q=sum/(n-1);
        cout<<fixed<<setprecision(6)<<p+q<<"\n";



    }

}