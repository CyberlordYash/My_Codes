#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
vector<float> a(n);
for(int i=0;i<n;i++)
{
    cin>>a[i];
}

sort(a.begin(),a.end());
reverse(a.begin(),a.end());
if(a[0]/2>=a[k])cout<<a[0]/2<<endl;
else cout<<a[k]<<endl;
}

}