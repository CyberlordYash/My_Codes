#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10][10];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter element :";
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int sum, max = 0;
    for (int i = 0; i < 3; i++)
    {
        sum = 0;
        for (int j = 0; j < 3; j++)
        {

            sum = sum + arr[j][i];
        }
        if (sum >= max)
            max = sum;
        cout << sum << endl;
    }
    cout << "largest column is :" << max;
}
