#include<iostream>
using namespace std;
 int recursion(int n)
 {
     if(n==1)return 1;

     else
     return n*recursion(n-1);
 }


int main()

{
    int a,b;
    cin>>a;
    b=recursion(a);
    cout<<b;
    
}