#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
cin.tie(NULL); 
int t;
cin>>t;
while(t--)
{   int temp1,temp2;int n;set<int> x,y;int count=0;
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>temp1>>temp2;
    x.insert(temp1);y.insert(temp2);
}
count=x.size()+y.size();

cout<<count<<endl;




}
}