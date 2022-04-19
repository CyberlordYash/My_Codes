#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    
int x,n;
cin>>n>>x;
vector<int> a(n),b;int temp=x;
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
b.push_back(x);
for(int i=0;i<n;i++)
{
    temp=temp+a[i];
    b.push_back(temp);
}
sort(b.begin(),b.end());
cout<<b[n]<<"\n";
cout<<"yash";
}

}