#include<iostream>
#include<climits>
#include<math.h>
using namespace std;

int main ()
{
    int arr[9] = {1,2,3,4,5,6,7,8,9};

    int key = 7;

    int start=0;
    int end=8;
    while (start<=end)
   {
    int mid = (start+end)/2;

    if (key == arr[mid])
    {
        cout<<"key is found"<<endl;break;
    }
    else if (key < arr[mid])
    {
        end = mid - 1;
    }
    else if (key > arr[mid])
    {
        start = mid+1;
    }
     else {cout<<"key is not found"<<endl;}
   } 
  
    return 0;
}