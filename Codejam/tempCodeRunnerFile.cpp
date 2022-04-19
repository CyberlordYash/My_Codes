#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
cin.tie(NULL); 
int t,count=1;
cin>>t;
while(t--)
{
int r,c;char ch='+';
cin>>r>>c;
cout<<"Case #"<<count<<" :"<<endl;
count++;
for(int i=0;i<2*r+1;i++)
{
    for(int j=0;j<2*c+1;j++)
    {
        if(i==0&&(j==0||j==1)){cout<<".";}
        else if(i==1&&(j==0||j==1)){cout<<".";}
        else {
            if(i%2==0&&j%2==0){cout<<"+";}
            else if(i%2!=0&&j%2==0) {cout<<"|";}
            else {if(i%2!=0)cout<<".";
                    else cout<<"-";}
        }
        
    }
   
    cout<<endl;
}




}
}