#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,len,fin; string s;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>s;

    
    fin=0;
    len=s.length();
    for(int j=0;j<len;j++)
    {
        if(s[j]=='1'){if(s[j+1]=='0')fin=1;}
        if(s[j]=='1'){if(s[j+1]=='1')fin=1;}
    }
    if(fin==0)cout<<"No"<<endl;
    else cout<<"Yes"<<endl;

    }

}