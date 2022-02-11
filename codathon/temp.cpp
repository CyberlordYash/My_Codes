#include<bits/stdc++.h>
using namespace std;

unsigned long long int comb(unsigned long long int n,unsigned long long int r)
{unsigned long long temp=1;
for(unsigned long long int i=n;i>r;i--)
{
temp=temp*i;
}
for(unsigned long long int i=n-r;i>0;i--)
{
    temp=temp/i;
}
return temp;
}
int main()
{

cout<<comb(7,3);


}