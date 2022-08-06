#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of elements:";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    cout<<"New array sorted is:"<<endl;
    

    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<"2 occurend this many times:"<<endl;
    cout<<binary_search(v.begin(),v.end(),2)<<endl;
    
    reverse(v.begin(),v.end());
    cout<<"Reversed array is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<"max element is :"<<*max_element(v.begin(),v.end())<<endl;
    cout<<"min element is :"<<*min_element(v.begin(),v.end())<<endl;
    cout<<"Sum all elements is :"<<accumulate(v.begin(),v.end(),0)<<endl;
    cout<<"1 occured this number of times:"<<count(v.begin(),v.end(),1)<<endl;
    find(v.begin(),v.end(),5) != v.end()?cout << "\nElement found"<<endl:cout << "\nElement not found"<<endl;

    /*arr.erase(position to be deleted) – This erases selected element in vector and shifts and resizes the vector elements accordingly.
    arr.erase(unique(arr.begin(),arr.end()),arr.end()) – This erases the duplicate occurrences in sorted vector in a single line.
    */
    cout<<"Permutaion of vector:";
    next_permutation(v.begin(),v.end());
    prev_permutation(v.begin(),v.end());
    /*
    eg:
    Given Vector is:
5 10 15 20 20 23 42 45 
Vector after performing next permutation:
5 10 15 20 20 23 45 42 
Vector after performing prev permutation:
5 10 15 20 20 23 42 45 
    */
   cout<<"To find index distance is used(max/min elements):";
   cout<<distance(v.begin(),max_element(v.begin(),v.end()));

}