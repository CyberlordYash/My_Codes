#include<bits/stdc++.h>
using namespace std;
int check(int n)
{int temp,count=0;
temp=n;
while(temp)
{   if(n&1==1)count++;
    n=n>>1;
    temp=temp/2;
}
return count;
}
int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int t;
    cin>>t;
for(int j=0;j<t;j++){
    int f,count=0;
    cin>>f;
    for(int i=3;count<f;i++)
    {
        if(check(i)%2==0){cout<<i<<" ";count++;}
    }
    cout<<endl;
}

}