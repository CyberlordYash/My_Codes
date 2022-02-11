#include<iostream>
using namespace std;
int add(int a,int b)
{
    int sum=a+b;
    return sum;
}
int main()
{
    int a,b,sum;
    cout<<"Enter two numbers :";
    cin>>a>>b;
    sum=add(a,b);
    cout<<"Sum of two number is :"<<sum;

}