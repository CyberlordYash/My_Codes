#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,5,4,3,2};
     for(int i=0;i<5;i++)
    {
        cout<<a[i];
    }
    cout<<endl;
    sort(a,a+4);
    for(int i=0;i<5;i++)
    {
        cout<<a[i];
    }
}