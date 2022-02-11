#include<iostream>
using namespace std;
int main()
{
    int n,temp;
    cin>>n;
    for(int i=2;i*i<=n;i++)
    {temp=n;
        while(temp%i==0){
            cout<<i<<"   ";
            temp=temp/i;
        }
    }

}