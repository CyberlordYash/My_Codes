#include<iostream>
#include<string.h>
using namespace std;
class emp
{private:
    char name[25];
int number;
int adress;

public:
    void inputdata()
{cout<<"Enter number :\n";
    cin>>number;
    cout<<"\nEnter Name:";
cin.getline(name,25);
cout<<"\nEnter number:\n";
cin>>adress;}
    
    void printdata()
    {cout<<name<<"\n"<<number<<"\n"<<adress;


    }
    };

    int main()
    {
        emp a[10];

    for(int i=0;i<2;i++)
    {
        a[i].inputdata();

    }

    for(int i=0;i<2;i++)
    {
        a[i].printdata();
    }

    }


