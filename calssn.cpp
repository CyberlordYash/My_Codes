#include<iostream>
using namespace std;
class emp
{
    public:
    int a;
char b[50];
}am[50];

int main()
{
    for(int i=0;i<2;i++)
    {
        cout<<"Enter character:";
        cin.getline(am[i].b,50);
        cout<<"Enter number:";
        cin>>am[i].a;
           }

    
    for(int i=0;i<2;i++)
    {
        cout<<am[i].b<<am[i].a;
    }

}