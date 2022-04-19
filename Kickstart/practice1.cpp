#include<bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t,count=1;
cin>>t;
while(t--)
{
int n,m,sum=0,fin;
cin>>n>>m;
vector<int> a(n);
for(int i=0;i<n;i++)
{
cin>>a[i];
sum=sum+a[i];
}
fin=sum-(sum/m)*m;
cout<<"Case #"<<count<<": "<<fin<<"\n";
count++;



}
}