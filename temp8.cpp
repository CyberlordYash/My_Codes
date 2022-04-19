#include<bits/stdc++.h>
using namespace std;
int question5C ( int n)
{ // n is a positive integer
if (n < 10) return n;
int a = n % 10;
int b = question5C ( n / 10);
if ( a > b )
return a;
else
return b;
}

int main()
{int a=5471;
    cout<<question5C(a);

}