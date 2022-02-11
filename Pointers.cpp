#include<iostream>
using namespace std;
int main()
{
   int n=500,*ptr;
   ptr=&n;
   cout<<*ptr<<"   "<<ptr;
   ptr++;*ptr++;
   cout<<"\n"<<ptr<<"\n"<<*ptr;
}
