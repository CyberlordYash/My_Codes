#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,dsa1,toc1,dm1,dsa2,toc2,dm2,sum1,sum2;
    cin>>t;
    while(t--)
    {   
        cin>>dsa1>>toc1>>dm1;
        cin>>dsa2>>toc2>>dm2;
        sum1=dsa1+toc1+dm1;
        sum2=dsa2+toc2+dm2;
        if(sum1>sum2){cout<<"Dragon\n";}
        else if(sum2>sum1)cout<<"Sloth\n";
        else {
            if(dsa1>dsa2){cout<<"Dragon\n";}
            else if(dsa2>dsa1)cout<<"Sloth\n";
            else{
                if(toc1>toc2)cout<<"Dragon\n";
                else if(toc2>toc1)cout<<"Sloth\n";
                else{
                    cout<<"Tie\n";
                }
            }

        }


    }


}