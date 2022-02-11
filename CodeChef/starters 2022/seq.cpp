#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{   int t,k,temp=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {   temp=0;
        cin>>k;
        while(k%2==0)
        {
            k=k/2;
            temp++;
        }
        cout<<temp<<"\n";


    }


}