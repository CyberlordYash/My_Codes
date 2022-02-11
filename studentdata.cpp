#include<iostream>

#include<stdlib.h>
#include<limits>    
 

using namespace std;
class student
{private:
    int n;
    char name[50];
    

    public:
    void getdat()
    {cout<<endl;
    cout<<"\nEnter number ";cin>>n;
    cin.sync();
    cout<<"Enter name";gets(name);
    

    }
    void printdat()
    {
        cout<<"Name:"<<name;
        cout<<"number"<<n;
        
    }
}s[50];
int main()
{
int num;
cout<<"Enter number of data you wants to enter :";
cin>>num;
for(int i=0;i<num;i++)
{
    s[i].getdat();
}
for(int i=0;i<num;i++)
{
    s[i].printdat();
}
return 0;
}