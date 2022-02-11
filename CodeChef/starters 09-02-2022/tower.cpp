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
unsigned long long int x,m,power=2,count=0;;
cin>>x>>m;
 
    //making 1 building
  while(power<=x){
    power<<=1;
    count++;
  }
  power=power/2;
  unsigned long long fin = count+1;
  if(fin>m){
    cout<<0<<endl;goto yash;
  }
  //equal +1
  if(power==x){
    cout<< (m-fin)+1<<endl;
  }
  //less +0
  else 
  {
    cout<<(m-fin)<<endl;
    yash:
    int a=0;
  }

}
}