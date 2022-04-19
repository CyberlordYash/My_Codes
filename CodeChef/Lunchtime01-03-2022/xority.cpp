#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
cin.tie(NULL); 
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
if(n==2)
{
    cout<<-1<<endl;
    continue;
}
if((n-1)%2==0){
    for(int i=1;i<=n;i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    continue;
}
int i=1;
    for(;i<=n-3;i++)
    {
        cout<<i<<" ";
    }
    cout<<i+2<<" "<<i<<" "<<i+1<<endl;






}
}