#include<iostream>
#include<string.h>
using namespace std;
int main()
{   
     char a[100],b[100],c[100];
     cin>>a;
    cin>>b;
    int num=strlen(a)+strlen(b),numa=strlen(a);
    for(int i=0;i<num;i++)
    {if(i<numa) c[i]=a[i];
    else c[i]=b[i-numa];

    }
    puts(c);cout<<"\n"<<c[8];


}