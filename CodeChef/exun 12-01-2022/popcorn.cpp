#include<bits/stdc++.h>
using namespace std;
int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a1,a2,a3,b1,b2,b3,c1,c2,c3;
    int t;
    cin>>t;
    for(int i=0;i<t;i++) 
    {
        cin>>a1>>a2;
        cin>>b1>>b2;
        cin>>c1>>c2;
        a3=a1+a2;b3=b1+b2;c3=c1+c2;
        int temp=max({a3,b3,c3});
        cout<<temp<<"\n";




    }    

}
    