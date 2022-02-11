#include<iostream>
using namespace std;
int yash(int &a,int &b)
{a=40;b=50;}

int main()
{
    int a=100,b=200;
    yash(a,b);
    cout<<a<<b;
    
    cout<<a<<"\n";
    cout<<a++;

}