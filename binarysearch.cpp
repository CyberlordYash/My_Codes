#include<iostream>
using namespace std;
int binsearch(int n,int arr[100],int x)
{   int start=0,end=n-1,mid;
while(start<=end)
{
    mid=(start+end)/2;
    if(arr[mid]==x){
        return mid;
    }
    else if(arr[mid]<x)
    {
        start=mid+1;
    }
    else{
        end=mid-1;
    }
return -1;
}

}

int main()
{
    int n,arr[100],x,fin;
    cout<<"Enter number of values u wanna enter:";
    cin>>n;
    cout<<"value to find:";
    cin>>x;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

fin=binsearch(n,arr,x);
if(fin==-1)cout<<"Not found";
else
    cout<<"value find at position :"<<fin;
}