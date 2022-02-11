#include<bits/stdc++.h>
using namespace std;
int main()
{
   unsigned long long t,n,d;unsigned long long sum;
    cin>>t;
    for(int i=0;i<t;i++)
    {  
        cin>>n>>d;
         sum=0;
        
        if(d<1)cout<<"1"<<endl;
        else if(d<=10){
            sum=sum+pow(2,d);
            if(sum<=n)
            cout<<sum<<endl;
            else cout<<n<<endl;

            }
        else
        {
            sum=sum+pow(2,10);
            while(sum<=100000000&&(d-10)>0)
            {
                sum=sum*3;
                d--;
            }
           if(sum<=n)
            cout<<sum<<endl;
            else cout<<n<<endl;
        }
         

    }


}
