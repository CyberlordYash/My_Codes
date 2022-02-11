#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,r[3],g[3],b[3],n,count=0,dia;
    cin>>t;
    while(t--)
    {
        cin>>n>>r[0]>>g[0]>>b[0];
        cin>>r[1]>>g[1]>>b[1]>>r[2]>>g[2]>>b[2];
    
      dia=r[0]+g[1]+b[2];
        if(dia==n)cout<<"0\n";
        else{
            count=(3*n-dia)/2;
            cout<<count<<endl;
        }

    
    }

}