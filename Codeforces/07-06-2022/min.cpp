#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
vector<int> a(n),b(n),d(n);
int p=0;
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=0;i<n;i++)
cin>>b[i];

  int diff=0;
    int temp=1;
    for(int i=0;i<n;i++){
        if(b[i]>0) temp=0;
    }
    if(temp){
        cout<<"YES\n";
        goto yash;
    }
    for(int i=0;i<n;i++){
        if(a[i]>0 && b[i]>0){
            diff=a[i]-b[i];
        }
        if(a[i]<b[i]){
            cout<<"NO\n";
            goto yash;
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]<=diff) a[i]=0;
        else a[i]-=diff;
    }
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            cout<<"NO\n";
            goto yash;
        }
    }
    cout<<"YES\n";
    yash:
    int h;
}

}
