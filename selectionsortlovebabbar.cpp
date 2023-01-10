#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int min = v[0], index;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (v[j] <= v[i])
            {
                min = v[j];
                index = j;
            }
        }
        swap(v[i], v[index]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << "  ";
    }
}