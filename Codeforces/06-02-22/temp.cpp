#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; string s,s1,s2;
    cin>>t;
    for(int i=0;i<t;i++)
    {   int n,k,pal;
        cin>>n>>k;
        cin>>s;
        s1=s;
        reverse(s.begin(),s.end());
        s2=s;
        if(s1==s2)pal=0;
        else pal=1;
    if(k==0)
    cout<<1<<"\n";
    else{
if(pal==0)cout<<1<<"\n";
else cout<<2<<"\n";

    }






    }
}