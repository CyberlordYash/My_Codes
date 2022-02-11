#include<iostream>
#include<vector>
using namespace std;
int main()
{int n,q,c;
vector<vector<int>> a;
vector<int> v;
cin>>n>>q;
for(int i=0;i<n;i++)
{
    cin>>c;
    for(int j=0;j<c;j++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    a.push_back(v);
    v.clear();
}
for(int i=0;i<5;i++)
{   for(int j=0;j<5;j++)
    cout<<a[i][j];
}    
       
}