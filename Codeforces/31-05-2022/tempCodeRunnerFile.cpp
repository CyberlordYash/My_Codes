#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t;
cin>>t;
while(t--){
long long int n,sum,odd=0,even=0;
cin>>n;
vector<long long int> v(n);
for(int i=0;i<n;i++)
cin>>v[i];
for(int i=0;i<n-1;i++)
{
    if(v[i]%2==0)even++;