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
    int n,mid,count=0,yash=0,fin=0;vector<int> a,b,arev,brev;
    cin>>n;int temp;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        a.push_back(temp);
    }
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        b.push_back(temp);
    }
    
    if(n%2!=0)
    {
        mid=n/2;
        if(a[mid]!=b[mid])cout<<-1<<"/n";
    else{
        for(int i=0;i<mid;i++)
        {
            if((a[i]==b[i]||a[i]==b[n-1-i])&&(a[n-i-1]==b[i]||a[n-i-1]==b[n-i-1]))
            count++;
        }
        if(mid==count){
            for(int i=0;i<mid;i++)
            {
                if(a[i]!=b[i]){fin++;}
                if(a[i]==b[i]){if(fin!=0)yash++;}
            }
            if(yash==0)cout<<1<<"\n";
            else
            cout<<yash+1<<"\n";
        }
        else cout<<-1<<"\n";
    }
    }
    else 