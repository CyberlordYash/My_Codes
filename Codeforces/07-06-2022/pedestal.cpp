#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
int num=n/3;
if(n%3==2){
    cout<<num+1<<" "<<num+2<<" "<<num-1<<endl;
}
if(n%3==0){
    cout<<num<<" "<<num+1<<" "<<num-1<<endl;
}
if(n%3==1){
    if(num-2!=0)
    cout<<num+1<<" "<<num+2<<" "<<num-2<<endl;
    else
     cout<<num<<" "<<num+2<<" "<<num-1<<endl;
    
}




}
}