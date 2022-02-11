#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;long long l,r,k,count;
    cin>>t;
    while(t--)
    {
        cin>>l>>r>>k;
        if(l==r&&l>1){cout<<"YES\n";}
        else {
        if(l%2==0&&r%2==0)count=(r-l)/2;
        else count=((r-l)/2)+1;
    
        if(count>k)cout<<"NO\n";
        else cout<<"YES\n";
        }
    }

}