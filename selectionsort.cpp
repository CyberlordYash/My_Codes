#include<iostream>
using namespace std;
int selsort(int arr[],int n)
{   int t=0;
while(t<n){
    int min=arr[t];
    //search
    for(int i=t;i<n;i++)
    {
            if(arr[i]<min)min=i;
    }
    cout<<min<<endl;
    //swap
    int temp;
    temp=arr[t];
    arr[t]=arr[min];
    arr[min]=temp;
    //increment
    t++;
    
    }
  
    }

int main()
{   int n,arr[100],x;
    cout<<"Enter number of values u wanna search:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Sorted array is:";
    selsort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
