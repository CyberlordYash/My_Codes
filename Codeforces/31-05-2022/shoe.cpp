#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
vector<int> v(n),b(n,0);
for(int i=0;i<n;i++)
cin>>v[i];
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++){
        if(v[i]==v[j])b[i]++;
    }
}
for(int i=0;i<n;i++)
{
    cout<<b[i];
}
for(int i=0;i<n;i++)
{
    if(b[i]==1){cout<<"-1"<<endl;break;}
}
set<int> s;
for(int i=0;i<n;i++)
{
    s.insert(b[i]);
}
for(int i=0;i<s.size();i++)
{
    cout<<s[i]<<" ";
}

}
}