#include<iostream>
using namespace std;
void sorting(int arr[],int n)
{
for(int j=0;j<n-1;j++)
{    
int min=arr[j],minindex=j;
//searching for minimum
for(int i=j+1;i<n;i++)
{
    if(min<arr[i]){min=arr[i];
    minindex=i;}
}
//swapping
int temp;
temp=arr[j];  arr[j]=arr[minindex];   arr[minindex]=temp;


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