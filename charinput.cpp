#include<iostream>
using namespace std;
class emp
{   public:
    char a[50];
}e[50];

int main()
{
    for(int i=0;i<2;i++)
    {
        cin.getline(e[i].a,40);
    }
    for(int i=0;i<2;i++)
    {
        cout<<e[i].a;
    }

}