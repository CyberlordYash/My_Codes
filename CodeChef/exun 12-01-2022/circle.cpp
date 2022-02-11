#include<bits/stdc++.h>
using namespace std;
int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int t,m,x;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>m>>x;
        if(m==2)
        {
            for(int j=0;j<x;j++)
            cout<<"1 ";
        }
        else if(m%2!=0){
            if(x<m){
                for(int j=1;j<=x;j++)
                cout<<j<<" ";
                cout<<"\n";
            }
            else {
                for(int j=0;j<=m;j++)
                cout<<j<<" ";
                for(int j=x;j<=m;j++)
                cout<<m-1<<" ";
            cout<<"\n";
            }
            
        }
        else{

            if(x<=m-2){
                for(int j=1;j<=x;j++)
                cout<<j<<" ";
                cout<<"\n";
            }
            else{
                for(int j=1;j<=m-2;j++)
                cout<<"1 ";
                for(int j=m-1;j<=x;j++)
                cout<<"2 ";
                cout<<"\n";
            }
        }



    }



}
    


    

