#include<iostream>
using namespace std;
int main()
{
    int a[100],d,temp,n[100];
    for(int i=0;i<5;i++)
    cin>>a[i];
    cin>>d;
   for(int i=0;i<d;i++)
    {
        n[i]=a[i];
    }
    for(int i=d;i<5;i++)
    {
        a[i-d]=a[i];
    }
    for(int i=5-d;i<5;i++)
    {
       a[i]=n[i-5+d];
    }
    for(int i=0;i<5;i++)
    {
        cout<<a[i];
    }
}
