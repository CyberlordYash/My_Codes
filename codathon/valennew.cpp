#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
cin.tie(NULL); 
int t;
cin>>t;
while(t--)
{int n;
    cin>>n;vector<int> a,b;int count=0;
    for(int i=0;i<n;i++)
    {int temp;
    cin>>temp;
        a.push_back(temp);
    }
    for(int i=0;i<n;i++)
    {int temp;
    cin>>temp;
    b.push_back(temp);
    }
    if(n%2!=0){
    for(int i=0;i<n/2;i++)
    {
        if(a[i]==b[i]){}
        else {reverse(a.begin()+i,a.end()-i);count++;}
    }
    if(a==b)cout<<count<<"\n";
    else cout<<-1<<"\n";
    }
    else{
     for(int i=0;i<=n/2;i++)
    {
        if(a[i]==b[i]){}
        else {reverse(a.begin()+i,a.end()-i);count++;}
    }
    if(a==b)cout<<count<<"\n";
    else cout<<-1<<"\n";   
    }
    

}
}