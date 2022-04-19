#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL); 
int t;
cin>>t;
while(t--)
{
   unsigned long long int temp,c,p=1,sumeven=0,sumodd=0,total=0,fin=0,odd;
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>c;
       temp=log2(c);
    if(temp%2==0)sumeven++;
    else    sumodd++; 
   } 
  sumeven=pow(2,sumeven%1000000007)-1;
  for(unsigned long long i=2;i<=sumodd;i=i+2)
  { p=1;
      for(unsigned long long int j=1;j<=i;j++)
      {
          p=p*(sumodd-j+1)/j;
      }
      total=total+p;

  }
  total=sumeven+total+total*sumeven;
  total=total%1000000007;
  cout<<total<<"\n";


}
}