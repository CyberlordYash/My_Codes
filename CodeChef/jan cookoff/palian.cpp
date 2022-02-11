#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {   int n;
       cin>>n;
        for(int i=0;i<n;i++)
        {
            if(i%3==0)cout<<"p";
            else if(i%3==1)cout<<"q";
            else cout<<"r";
        }
        cout<<"\n";

    }

}