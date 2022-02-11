#include<bits/stdc++.h>
using namespace std;
int main()
{int n;
    vector<int> even;
    vector<int> odd;
    vector<int> a;
    for(int i=0;i<5;i++)
    {
        cout<<"Enter element"<<i+1<<" :";
        cin>>n;
    a.push_back(n);
    }
    for(int i=0;i<5;i++)
    {
        if(a[i]%2==0)even.push_back(a[i]);
        else odd.push_back(a[i]);
    }

    
   
    for(int i=0;i<even.size();i++)
    {
        cout<<even[i];
    }
    cout<<"\n";
    for(int i=0;i<odd.size();i++)
    {
        cout<<odd[i];
    }

}