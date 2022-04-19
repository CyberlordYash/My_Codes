#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t,c=1;
cin>>t;
while(t--)
{
int n,count=1;
cin>>n;
vector<int> v(n);
for(int i=0;i<n;i++)
{
    cin>>v[i];
}
sort(v.begin(),v.end());
for(int i=0;i<n;i++)
{
    if(v[i]>=count){count++;}
}
cout<<"Case #"<<c<<": "<<count-1<<endl;
c++;


}
}