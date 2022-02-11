#include<bits/stdc++.h>
using namespace std;
int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        if(n%2!=0){
            for(int j=0;j<n;j++)
            {
                for(int k=0;k<n;k++)
                {
                    cout<<"1 ";
                }cout<<"\n";
            }
        }
        else{
            for(int j=0;j<n;j++)
            {   
                for(int k=0;k<n;k++)
                {   if(k==0)
                    cout<<"0 ";
                    else cout<<"1 ";
                }cout<<"\n";
            }
        }




    }



}