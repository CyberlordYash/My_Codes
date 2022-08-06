#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
string s;
cin>>s;
int t=s[0]-97,y=s[1]-96,sum;
// cout<<t<<"   "<<y;
if(y>t){
    sum=t*25+y-1;
}
else {
    sum=t*25+y;
}
cout<<sum<<endl;






}
}