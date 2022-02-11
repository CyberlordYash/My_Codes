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
    int n;int temp;
    cin>>n;
    vector<int> a(2*n),b(2*n,0); 
    for(int i=0;i<2*n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<2*n;i++)
    {temp=a[i];
    b[temp]++;
    }
    for(int i=0;i<2*n;i++)
    {
        if(b[i]==0){cout<<"YES"<<endl;break;}
        else if(b[i]==1){cout<<"NO"<<endl;break;}
       
    }


}
}