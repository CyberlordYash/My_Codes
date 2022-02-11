#include<iostream>
#include<cstdio>
#include<stdlib.h>
using namespace std;
class student
{private:
    int n;
    char name[50];
    

    public:
    void gedat()
    {cout<<"Enter name";gets(name);cout<<endl;
    cout<<"\nEnter number ";cin>>n;
    

    }
    void prindat()
    {
        cout<<"Name:"<<name;
        cout<<"number"<<n;
        
    }
}s[50];
int main()
{
int num;
cout<<"Enter number of data you wants to enter :";
cin>>num;
for(int i=0;i<num;i++)
{
    s[i].gedat();
}
for(int i=0;i<num;i++)
{
    s[i].prindat();
}
return 0;
}