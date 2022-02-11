#include<iostream>
using namespace std;
int factorial(int x);
int main()
{   int a,f;
    cout<<"Enter a number to find its factorial:";
    cin>>a;
    f=factorial(a);
    cout<<"Factorial of "<<a<<" is "<<f;

}
int factorial(int x)
{
    if(x==0||x==1)
    {return 1;}
    else {
        return x*factorial(x-1);
    }
}
