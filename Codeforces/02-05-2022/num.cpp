#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{    
    long long int x,y,temp;
    cin>>x>>y;
    
        if(x>y){cout<<"0 0";}
        else {
            if(y%x){cout<<"0 0";}
            else {
                temp=y/x;
                cout<<1<<" "<<temp;
            }

        }
        cout<<endl;

}
}