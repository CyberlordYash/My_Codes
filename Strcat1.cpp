#include<iostream>
#include<string.h>
using namespace std;
int main()
{char a[50],b[50];
gets(a);
gets(b);
strcat(a,b);
cout<<a<<"\n"<<b;
return 0;

}