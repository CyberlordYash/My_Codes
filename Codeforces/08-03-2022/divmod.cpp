#include<bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(false);
cin.tie(NULL); 
int t;
cin>>t;
while(t--)
{
int l,r,a;
cin>>l>>r>>a;
int div1=l/a;
int rem1=l%a;
int div2=r/a;
int rem2=r%a;
if(div1==div2){cout<<rem2+div2<<endl;continue;}
cout<<max(div2+rem2,div2+a-2)<<endl;







}
}