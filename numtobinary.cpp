#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,temp,ans=0,count=0,num;
cout<<"Enter kar :";
cin>>n;
while(n!=0)
{
    temp=n&1;
    ans=(temp*pow(10,count))+ans;
    cout<<ans<<"   ";
    n=n>>1;
    count++;
}
cout<<ans;

}