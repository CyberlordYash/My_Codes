#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10][10], n, m;
    cout << "Enter rows: ";
    cin >> n;
    cout << "Enter column: ";
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "enter array: ";
            cin >> arr[i][j];
        }
    }
    int rowstart = 0, colstart = 0, rowend = n - 1, colend = m - 1, count = 0, size = 9;
    while (count != size)
    {
        for (int i = 0; i < n; i++)
            cout << arr[rowstart][i];
        rowstart++;
        for (int i = 1; i < m - 1; i++)
            cout << arr[i][colend];
        colend--;
        for (int i = n - 1; i >= 0; i--)
            cout << arr[rowend][i];
        rowend--;
        for (int i = m - 2; i > 0; i--)
            cout << arr[i][colstart];
        colstart++;
    }
}