#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;vector<int> a,b;int temp,ans1,ans2;
        cin>>n;
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
        for(int i=0;i<n;i++)
        {
            if(a[i]>b[i])   swap(a[i],b[i]);
        }
    ans1=*max_element(a.begin(),a.end());
    ans2=*max_element(b.begin(),b.end());
    cout<<ans1*ans2<<"\n";

    }
}