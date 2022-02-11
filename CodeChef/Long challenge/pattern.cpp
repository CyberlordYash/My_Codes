#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,distance;
    cin>>n;
    for(int i=0;i<2*n-1;i++)
    {
        for(int j=0;j<2*n-1;j++)
        {
            
            cout<<abs((1-i)+(2-j))<<" ";
        }
        cout<<"\n";
    }
}