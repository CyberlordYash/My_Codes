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
int n,temp,count=0,fin=0;vector<int> a;
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>temp;
    a.push_back(temp);
}
if(n==3){if(a[1]%2!=0){cout<<-1<<endl; goto f;}}
    for(int i=1;i<n-1;i++)
    {
        if(a[i]<=1)count++;
    }
    if(count==n-2){cout<<-1<<endl; goto f;}
for(int i=1;i<n-1;i++)
{
if(a[i]%2==0&&a[i]>=2){fin=fin+a[i]/2;}
else {fin=fin+((a[i]+1)/2);}

}
cout<<fin<<endl;

f:
int yash;

}
}