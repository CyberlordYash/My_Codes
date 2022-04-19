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
char s[1000],c;int temp=0,temp1,temp2;;
cin>>s;
cin>>c;
for(int i=0;i<strlen(s);i++)
{
    if(s[i]==c){
    temp1=i;temp2=strlen(s)-i-1;
    if(temp1%2==0&&temp2%2==0){
        temp=1;
        break;
    }
    }
}
if(temp==0)cout<<"NO"<<endl;
else cout<<"YES"<<endl;



}
}

