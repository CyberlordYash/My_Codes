#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter n";
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i = i + 2)
    {
        swap(arr[i], arr[i + 1]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
}