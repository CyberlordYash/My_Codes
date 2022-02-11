#include<iostream>
using namespace std;
void sorting(int arr[],int n)
{int start=0;
for(int j=start;j<n-1;j++)
{    
int min=arr[j],minindex;
//searching for minimum
for(int i=1;i<n;i++)
{
    if(min<arr[i])min=arr[i];
    minindex=i;
}
//swapping
int temp;
temp=a[j];  a[j]=a[minindex];   a[minindex]=temp;

start++;
}
for(int i=0;i<n;i++)
{
cout<<arr[i];
}
}

int main()
{
    int n,arr[10000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
sorting(arr,n);

}