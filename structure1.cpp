#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
struct emp
{
    int no;
    char name[500];

};
int main()
{emp e[50];
for(int i=0;i<2;i++)
{
    cin>>e[i].no;
   cin>>e[i].name,300;
}
for(int i=0;i<2;i++)
{
    cout<<e[i].no;
    cout<<e[i].name;
}


    
    

}