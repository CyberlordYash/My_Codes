#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(NULL); 
int t;
cin>>t;
for(int i=0;i<t;i++)
{
int n,k;
cin>>n>>k;
vector<int> v;
for(int j=1;j<=n;j++)
{
    v.push_back(j);
}
if(n>1&&k==1)
{
    cout<<"-1\n";
}
else
{
    swap(v[k-1],v[n-1]);
for(int j=0;j<n;j++)
{
    cout<<v[j]<<" ";
}
cout<<"\n";
}



}
}