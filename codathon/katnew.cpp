#include<bits/stdc++.h>
using namespace std;

unsigned long long int comb(unsigned long long int n,unsigned long long int r)
{unsigned long long temp=1;
for(unsigned long long int i=n;i>r;i--)
{
temp=temp*i;
}
for(unsigned long long int i=n-r;i>0;i--)
{
    temp=temp/i;
}
return temp;
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL); 
int t;
cin>>t;
while(t--)
{
   unsigned long long int c,p=1,sumeven=0,sumodd=0,total=0,fin=0,odd;
   int n,temp;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>c;
       temp=log2(c);
    if(temp%2==0)sumeven++;
    else    sumodd++; 
   } 
  sumeven=pow(2,sumeven)-1;
  for(unsigned long long int i=2;i<=sumodd;i=i+2)
  { 

      total=total+comb(sumodd,i);

  }
  total=sumeven+total+total*sumeven;
  total=total%1000000007;
  cout<<total<<"\n";


}
}