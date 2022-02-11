#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{int n;
cin>>n;
vector<pair<int,int>> a;
for(int i=0;i<n;i++)
{int temp1,temp2;
cin>>temp1>>temp2;
 a.push_back(make_pair(temp1,temp2));   
}
sort(a.begin(),a.end());



}
}