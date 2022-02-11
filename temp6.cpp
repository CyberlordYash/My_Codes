#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,temp,bsize;vector<int> v,b;
   cin>>t;
   for(int i=0;i<t;i++)
   {
       cin>>n;
       for(int j=0;j<n;j++)
       {
           cin>>temp;
           v.push_back(temp);
       }
            int j=0,k=n-1;
            while(j<k)
            {
            temp=v[j]&v[k];
            b.push_back(temp);
            j++;
            if(j==k)
            {
                j=0;k--;
            }
            
            }
            bsize=b.size();
    while(bsize>1)
    {   
        sort(b.begin(),b.end());
        temp=bsize-1;
        temp=b[0]|b[temp];
        b.erase(b.begin());b.erase(b.end()-1);
        b.push_back(temp);
        bsize=b.size();
    }
    cout<<b[0]<<endl;
    v.clear();b.clear();

   }
}