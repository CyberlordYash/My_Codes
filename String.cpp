#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{char a[100];int n,sum=0; 
 gets(a);
 n=strlen(a);
 cout<<a[1];
 cout<<n;
 for(int i=0;i<n;i++)
 {
     if(a[i]==a[n-i-1]){sum=sum+1;}
 }
 if(sum==n)cout<<"\nIt is a paliandrome ";
 else cout<<"\nIt is a not paliandrome";

}