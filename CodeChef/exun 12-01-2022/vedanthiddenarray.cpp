#include<bits/stdc++.h>
using namespace std;
int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int t,n,a,temp;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>a;
        temp=a&1;
        //odd
        if(n==1){
            if(a%2==0)cout<<"Even\n";
            else cout<<"Odd\n";

        }
        else{
        if(temp==1){
            if(n%2==0)cout<<"Even\n";
        else cout<<"Odd\n";

        }
        //even
        else{cout<<"Impossible\n";


        }
    }
    }



    }
    


    

