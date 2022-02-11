#include<iostream>

using namespace std;
int print(int *arr)
{
for(int i=0;i<4;i++)
{
    cout<<*arr;*arr++;
}
return 0;
}
int main()
{
    int arr[10];
    for(int i=0;i<4;i++)
    {cin>>arr[i];

    }
    print(arr);
    return 0;

}