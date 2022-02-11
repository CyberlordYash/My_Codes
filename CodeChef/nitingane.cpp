#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t,a,b,c,d,nitin=0,sobh=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b>>c>>d;
        nitin=a;sobh=b;
        if(nitin>=sobh)
        {sobh=sobh+c;
        if(nitin>=sobh)sobh=sobh+d;
        else nitin=nitin+d;
        
        }
        else 
        {
            nitin=nitin+c;
            if(nitin>=sobh)sobh=sobh+d;
            else nitin=nitin+d;

        }
        if(nitin>=sobh)cout<<"N"<<endl;
        else cout<<"S"<<endl;

    }


}