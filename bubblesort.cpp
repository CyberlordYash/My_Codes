#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    vector<int> v = {1, 4, 3, 2, 5};

    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 4; j++)
        {
            if (v[j] > v[j + 1])
                swap(v[j], v[j + 1]);
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << v[i];
    }
}