#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={5,3,2,4,1};
    sort(v.begin(),v.end());
    cout<<v[0]<<v[1]<<v[2]<<v[3]<<v[4]<<endl;
    reverse(v.begin(),v.end());
    cout<<v[0]<<v[1]<<v[2]<<v[3]<<v[4]<<endl;
    cout<<*max_element(v.begin(),v.end())<<endl;
    cout<<*min_element(v.begin(),v.end())<<endl;
    cout<<accumulate(v.begin(),v.end(),0)<<endl;
    cout<<count(v.begin(),v.end(),1)<<endl;
    cout<<find(v.begin(),v.end(),2);
}