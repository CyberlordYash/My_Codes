#include<algorithm>
#include<iostream>
using namespace std;
int main()
{int a[5]={5,3,4,2,1};
    for(int i=0;i<5;i++)
    {
        cout<<a[i];
    }cout<<"\n";
    sort(a,a+5);
for(int i=0;i<5;i++)
    {
        cout<<a[i];
    }cout<<"\n";

}