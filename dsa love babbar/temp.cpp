#include <iostream>
#include <string.h>
#include <stack>
using namespace std;

int main()
{
    string s = "yash";
    string a;
    stack<char> r;
    for (auto i : s)
    {
        r.push(i);
    }
    while (r.empty() != true)
    {
        a.push_back(r.top());
        r.pop();
    }
    cout << a;
}