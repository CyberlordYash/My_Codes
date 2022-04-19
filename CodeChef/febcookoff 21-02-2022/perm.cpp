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
int n,k;
cin>>n>>k;
vector<int> a(k);
for(int i=0;i<k;i++)
{
    cin>>a[i];
}
sort(a.begin(),a.end());
int temp=0;
for(int i=0;i<k;++i)
{

int temp2=a[i];
while(temp2>temp)
{ 
    cout<<temp2<<" ";
    temp2--;
}

temp=a[i];

}
cout<<"\n";



}
}