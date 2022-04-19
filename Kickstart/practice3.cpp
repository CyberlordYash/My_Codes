#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t,count=1;
cin>>t;
while(t--)
{
int n,cnt=1,temp2=0;;
cin>>n;
vector<int> v(n);
for(int i=0;i<n;i++)
{
    cin>>v[i];
}
// sort(v.begin(),v.end());
// reverse(v.begin(),v.end());
cout<<"Case #"<<count<<": ";
for(int i=0;i<n;i++)
{
    int temp=0;

for(int j=i;j>=0;j--)
{
    if(v[j]>=cnt){temp++;}
}
if(temp2<temp){temp2=temp;cnt++;}
 cout<<temp2<<" ";
}
cout<<"\n";

count++;




}
}