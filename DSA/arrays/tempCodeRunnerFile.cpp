#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,mid,dist1,dist2;
    cin>>n;
    mid=n-1;
    for(int i=0;i<2*n-1;i++)
    {
        for(int j=0;j<2*n-1;j++)
        {
            dist1=abs(i-mid);dist2=abs(j-mid);
            if(dist1>dist2)cout<<dist1+1;
            else cout<<dist2+1;
        }
        cout<<endl;
    }


}