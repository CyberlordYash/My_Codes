#include<iostream>
using namespace std;
struct emp
{
    char a[50];
    int n;
}e[30];

int main()
{
    for(int i=0;i<3;i++)
    {cout<<"Enter name :";gets(e[i].a);
    cout<<"Enter number:";cin>>e[i].n;
    }
    for(int i=0;i<3;i++)
    {
    cout<<"Name is:"<<e[i].a;
    cout<<"Number is:"<<e[i].n;
    }
return 0;
}