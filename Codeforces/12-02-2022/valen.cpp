#include <bits/stdc++.h> 
using namespace std; 
int prime[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67}; 
int a,n,b[100]={0},l=0; 
int main(){ 
 cin.tie(0);cout.tie(); 
 ios::sync_with_stdio(false);  
 cin>>n; 
 for(int i=1;i<=n;i++){ 
  cin>>a; 
  int w=0; 
  for(int j=0;j<19;j++){ 
   if(a%prime[j]==0){ 
    int k=0; 
    while(a%prime[j]==0){ 
     a/=prime[j]; 
     k^=1;  
    } 
    w|=k<<j; 
   } 
  }  
  for(int i=30;i>=0;i--){ 
   if(w&1<<i){ 
    if(!b[i]){ 
     b[i]=w; 
     break; 
    } 
    w^=b[i]; 
   } 
  }  
 }  
 for(int i=0;i<=30;i++) 
  if(b[i]) l++; 
 long long ans=1; 
 for(int i=1;i<=n-l;i++) ans=ans*2%1000000007; 
 cout<<ans-1<<"\n"; 
}