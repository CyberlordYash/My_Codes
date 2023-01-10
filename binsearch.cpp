#include <bits/stdc++.h>
using namespace std;
int binarysearch(int arr[], int n, int key)
{
    int start = 0, end = n - 1, mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

int main()
{
    int val, arr[] = {1, 2, 3, 4, 5, 6, 7};
    val = binarysearch(arr, 7, 8);
    cout << val << endl;
}