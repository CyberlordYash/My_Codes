#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n,m;
cin>>n>>m;
vector<int> u(m),v(m);
for(int i=0;i<m;i++)
{
    cin>>u[i]>>v[i];
}
int price=n;
for(int i=1;i<n;i++)
{
    for(int j=0;j<m;j++){
    if((i==u[i]&&i+1==v[i])||(i+1==u[i]&&i==v[i])){price--;}
   
    }
}
cout<<price<<endl;


}
}