#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string toLowerCase(string s)
    {
        int size = s.size();
        int n;
        for (int i = 0; i < size; i++)
        {
            n = s[i];
            if (n <= 90)
            {
                n = n + 32;
                s[i] = n;
                cout << n << endl;
            }
            cout << n << endl;
        }
        return s;
    }
} a;
int main()
{

    cout << a.toLowerCase("Yash");
}