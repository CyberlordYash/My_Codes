#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
long long int sum=0;
vector<int> a(n);
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
for(int i=0;i<n;i++)
{
   if(a[i]>=10&&a[i]<=60)sum++;
}
cout<<sum<<endl;






}

}
