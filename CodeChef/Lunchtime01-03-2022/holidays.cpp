#include<bits/stdc++.h>
using namespace std;
int main()
{ ios_base::sync_with_stdio(false);
cin.tie(NULL); 
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
vector<int> a(n);int sum;
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
sort(a.begin(),a.end());
sum=n+8;
for(int i=0;i<n;i++)
{
    if(a[i]==6||a[i]==13||a[i]==20||a[i]==27||a[i]==7||a[i]==14||a[i]==21||a[i]==28){sum--;}

}
cout<<sum<<endl;




}
}