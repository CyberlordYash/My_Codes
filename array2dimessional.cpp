#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int main()
{
int a[10][10];
for(int i=0;i<4;i++)
{for(int j=0;j<4;j++){
    cout<<"Enter numebr "<<i+1<<"for data "<<j+1;
    cin>>a[i][j];
    }}

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<"\ndata "<<i+1<<"value is "<<j+1<<a[i][j];
        }
    }

}