#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6};
    int arr3[7];
    int i = 0, j = 0, k = 0;
    while (k < 7)
    {

        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }
    for (int i = 0; i < 7; i++)
    {
        cout << arr3[i];
    }
}