#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;string a;int n,count=1;
cin>>t;
while(t--)
{
cin>>a;
n=a.size()-1;
if(a[n]=='A'||a[n]=='E'||a[n]=='I'||a[n]=='O'||a[n]=='U'||a[n]=='a'||a[n]=='e'||a[n]=='i'||a[n]=='o'||a[n]=='u')
{
cout<<"Case #"<<count<<": "<<a<<" is ruled by Alice.\n";
}
else if(a[n]=='y'){
    cout<<"Case #"<<count<<": "<<a<<" is ruled by nobody.\n";
}
else 
{
    cout<<"Case #"<<count<<": "<<a<<" is ruled by Bob.\n";
}

count++;

}
}