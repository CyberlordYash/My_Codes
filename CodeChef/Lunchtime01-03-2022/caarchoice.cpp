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
    int x1,x2,y1,y2;
    cin>>x1>>x2>>y1>>y2;
    double cost1=double(y1)/double(x1),cost2=double(y2)/double(x2);
    if(cost1<cost2)cout<<-1<<endl;
    else if(cost1==cost2)cout<<0<<endl;
    else cout<<1<<endl;







}
}