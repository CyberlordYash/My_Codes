#include<bits/stdc++.h>
using namespace std;
int main()
{
    float t,t1,t2,r1,r2;float k1,k2;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>t1>>t2>>r1>>r2;
        k1=(t1*t1)/(r1*r1*r1);
        k2=(t2*t2)/(r2*r2*r2);
        
        if(k1==k2)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;


    }


}