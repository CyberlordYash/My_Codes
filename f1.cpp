#include<iostream>
using namespace std;
class emp
{  public:
   int a=9,b=8;

};

int add(emp ab)
{ 
int sum;
sum=ab.a+ab.b;
cout<<sum;
}
int main()
{emp t;
add(t);

}