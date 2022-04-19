#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
cin.tie(NULL); 
int t;
cin>>t;
while(t--){
long n,sum1=0,sum2=0;
cin>>n;
vector<long> v(n),sum(n);
for(int i=0;i<n;i++)
{
    cin>>v[i];
    sum1=sum1+v[i];
    sum[i]=sum1;
}
sum2=sum1;
for(int i=0;i<n;i++)
{
  sum2=min(max(sum[i],sum1-sum[i]),sum2);
} 
cout<<sum2<<endl;






}
}