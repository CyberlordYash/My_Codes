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
int x1,x2,x3,y1,y2,y3;
cin>>x1>>y1>>x2>>y2>>x3>>y3;
if((y1==y2)&&(y3<y2)){
    cout<<abs(x1-x2)<<endl;
}
else if((y3==y2)&&(y1<y2)){
    cout<<abs(x3-x2)<<endl;
}
else if((y1==y3)&&(y2<y1)){
    cout<<abs(x1-x3)<<endl;
}
else {
    cout<<0<<endl;
}





}
}