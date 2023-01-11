#include <bits/stdc++.h>
using namespace std;

void delStack(stack<int> &s, int count, int size)
{
    // base case to stop recursion
    if (count == size / 2)
    {
        s.pop();
        return;
    }
    // storing top element and popping it to move to middle element
    int num = s.top();
    s.pop();
    delStack(s, ++count, size);
    // pushing the element back
    s.push(num);
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    delStack(s, 1, 5);
    cout << "Yash" << endl;
    while (!s.empty())
    {
        cout << "yash : " << s.top() << endl;
        s.pop();
    }
}