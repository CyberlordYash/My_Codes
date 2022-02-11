#include<bits/stdc++.h>
using namespace std;
 
int main()
{   ios_base::sync_with_stdio(false);
cin.tie(NULL); 
  int t=0;
  cin>>t;
  for(int yu = 0; yu<t; yu++){
      int n,k;
      vector<pair<long long ,long long>> r;
      cin>>n>>k;
      long long a[n] , b[n];
      for(int i=0; i<n;i++){
          cin>>a[i];
      }
      for( int i=0; i<n;i++){
          cin>>b[i];
      }
      for(int i=0; i<n;i++){
          r.push_back(make_pair(a[i] , b[i]));
      }
      
      sort(r.begin() , r.end());
      
      for(int i=0; i<n; i++){
          if(r[i].first <= k){
              k+= r[i].second;
          }
          else{
              break;
          }
      }
      cout<<k<<"\n";
  }  
  }