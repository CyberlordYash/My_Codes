#include<bits/stdc++.h>
using namespace std;
int solve(int mid,string s)
{
int sum=0;
//from mid to beginning
for(int i=mid;i>=0;i--)
{
    int temp=(int(s[i])-int('0')+sum)%10;
    if(temp==0)continue;//skip krdeta hu
    else
    sum=sum+(10-temp);//making zero
}
return sum;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL); 
int t;
cin>>t;
for(int i=0;i<t;i++)
{
    int n,k; string s;
    cin>>n>>k;
    
    cin>>s;
    int end=n-1;
    int start=0,yash=0;
    //until both are equal
    while(start<=end)
    {   //dividing operation
        int mid=(start+end)/2;
        if(solve(mid,s)>k)
        end=mid-1;//reducing string length
        else{
            //length+1
            yash=mid+1;  start=mid+1;
        }
    }

    cout<<yash<<"\n";



}
}