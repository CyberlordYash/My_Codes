#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
vector<int> v(n);v[1]=2;v[6]=6;
cout<<v.size()<<endl;
v.pop_back();

for(int i=0;i<n+20;i++)
{   cout<<"cap:"<<v.capacity()<<endl;
    cout<<v[i]<<endl;
    v.push_back(i+1);
}
cout<<"at function:"<<v.at(3);
cout<<"capacity fucntion:"<<v.capacity()<<endl;



}