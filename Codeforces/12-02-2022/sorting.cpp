#include<bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(false);
cin.tie(NULL); 
int t;
cin>>t;
while(t--)
{
    int n,max,temp;vector<int> a,b;
    cin>>n;
    for(int i=0;i<n;i++)
    {cin>>temp;
    a.push_back(temp);
    b.push_back(temp);
    }
    sort(a.begin(),a.end());
    if(a==b)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;


}
}