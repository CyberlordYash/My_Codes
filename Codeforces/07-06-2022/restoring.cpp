#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int> a(n),b(n),dif(n);
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=0;i<n;i++)
cin>>b[i];
for(int i=0;i<n;i++)
{   if(i==0)dif[i]=b[i]-a[i];
else
    dif[i]=b[i]-max(a[i],b[i-1]);

}
for(int i=0;i<n;i++)
cout<<dif[i]<<" ";
cout<<endl;




}
}