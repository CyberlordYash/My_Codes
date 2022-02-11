#include<bits/stdc++.h>
using namespace std;
int main()
{    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    vector<int> a,b,first; int n,k,t,count,rem;
    cin>>t;
    for(int i=0;i<t;i++)
    {a.clear();b.clear();count=0;
    cin>>n>>k;
    //initialisation of a
    for(int j=1;j<=n;j++)
        {
        a.push_back(j);
        }
        first=a;

    for(int p=0;p<k;p++)
    {  
        b.clear();count++;
        //transformation start
        
        for(int j=0;j<n;j=j+2)
        {
        b.push_back(a[j]);
        }
    
        for(int j=1;j<n;j=j+2)
        {
        b.push_back(a[j]);
        }
        //transformation end
    if(first==b)break;       
        a.clear();
        a=b;
    
        
    }
    rem=k%count;
    //repeating
    for(int p=0;p<rem;p++)
    {  b.clear();
        //transformation start
        
        for(int j=0;j<n;j=j+2)
        {
        b.push_back(first[j]);
        }
    
        for(int j=1;j<n;j=j+2)
        {
        b.push_back(first[j]);
        }
        //transformation end
        
        first.clear();
        first=b;
    
        
    }


    for(int j=0;j<n;j++)
    {
        cout<<b[j]<<" ";
    }
    cout<<endl;
}

}