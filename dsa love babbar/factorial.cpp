#include <bits/stdc++.h>
using namespace std;
void fact(int n)
{

    if (n <= 0)
        return;
    fact(n / 10);
    if (n % 10 == 1)
        cout << "one";
    if (n % 10 == 2)
        cout << "two";
}
int main()
{
    fact(12);
}