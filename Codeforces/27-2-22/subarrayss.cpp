#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{int n;
cin>>n;
int temp;
set<int> a;
a.clear();
for(int i=0;i<n;i++)
{
    cin>>temp;
    a.insert(temp);
}
temp=a.size();
int ans=log2(temp);
cout<<ans<<"\n";

}
}