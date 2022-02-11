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
long long int n,sum=0;
cin>>n;
if(n==1){cout<<0<<"\n";}
else{long long int temp=2;
for(int i=1;i<=n;i++)
{
   
    long long int temp2=i^temp;
    sum=sum+temp2;
    if(temp%2==0)temp--;
    else temp=temp+3;


}
cout<<sum<<"\n";
}


}
}
