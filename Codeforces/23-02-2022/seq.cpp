#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int n,x;
    cin>>n>>x;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int temp=v.size(),temp2=0,i=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(v[i]*x==v[j]){/*v.erase(v.begin()+i)*/;v.erase(v.begin()+j);
           break;
            }
        }
         n=v.size();
       
    }
     cout<<v.size()<<endl;






}
}